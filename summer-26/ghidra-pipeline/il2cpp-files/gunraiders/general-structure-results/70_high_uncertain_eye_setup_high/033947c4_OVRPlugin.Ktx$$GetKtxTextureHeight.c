/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 033947c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureHeight(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x29;
  undefined8 in_stack_00000020;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  char cStack0000000000000048;
  int iStack000000000000004c;
  
  FUN_03359548();
  iStack000000000000002c = iStack0000000000000034;
  iStack0000000000000030 = iStack0000000000000034;
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_0422fd80);
  thunk_FUN_01c49334(uVar4,&stack0x00000030);
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_01c273e8(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
  thunk_FUN_01c495e4();
  uVar5 = FUN_03393b30();
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(in_stack_00000020);
  }
  FUN_03396b58();
  thunk_FUN_01c273e8(PTR_DAT_04235500);
  cVar1 = cStack0000000000000048;
  if (cStack0000000000000048 != '\0') {
    thunk_FUN_01c273e8(UnityEngine_UIElements_IPointerEvent_TypeInfo);
    thunk_FUN_01c273e8(PTR_DAT_04235500);
    if ((cVar1 != '\0') && (iStack000000000000002c == iStack000000000000004c)) {
      thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_GetPooled__);
      uVar4 = FUN_0335d3b4();
      uVar6 = thunk_FUN_01c273e8(
                                Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_focusController__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar6);
    }
  }
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_04230980);
  FUN_02f20da0(&stack0x00000048,iStack000000000000002c,uVar4);
  while (uVar5 = FUN_0335ce1c(), (uVar5 & 1) != 0) {
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 != 5) {
      if (iVar2 == 0xe) goto LAB_033948dc;
      if (unaff_x26 == (long *)0x0) {
LAB_033946d4:
        FUN_033966b4();
      }
      else {
        uVar5 = (**(code **)(*unaff_x26 + 0x1a8))();
        if ((uVar5 & 1) == 0) goto LAB_033946d4;
        FUN_033962a0();
      }
      lVar7 = *unaff_x23;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0339474c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498();
LAB_0339474c:
      (*(code *)*puVar3)();
    }
  }
  FUN_0339d160();
LAB_033948dc:
  FUN_0339cf34();
  return;
}


