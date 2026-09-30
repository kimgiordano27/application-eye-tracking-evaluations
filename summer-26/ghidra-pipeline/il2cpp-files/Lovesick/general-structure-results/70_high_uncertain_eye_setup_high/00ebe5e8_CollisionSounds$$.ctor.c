/*
FUNCTION_NAME: CollisionSounds$$.ctor
ENTRY_POINT: 00ebe5e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void CollisionSounds___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined1 uStack0000000000000010;
  byte bStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
                    /* try { // try from 00ebe5e8 to 00fbe5ef has its CatchHandler @ 00ebe664 */
                    /* try { // try from 00ebe5f0 to 00fbe6cf has its CatchHandler @ 00ebe204 */
  thunk_FUN_00d48444(StringLiteral_10620);
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<float>_get_Item__);
  *(undefined1 *)(unaff_x25 + 0x1ab) = 1;
  iStack0000000000000018 = unaff_w21;
  uVar5 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000018);
  uVar5 = FUN_01600b5c(*unaff_x22,uVar5);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
    unaff_w21 = iStack000000000000001c;
  }
  puVar1 = Method_System_Enum_EnumResult_SetFailure__;
  FUN_02660dac(uVar5,0);
  if (-1 < unaff_w21) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar4 = FUN_026be908(0);
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_92__;
    puVar2 = Method_System_Xml_XmlDeclaration_set_Standalone__;
    if ((unaff_w21 < iVar4) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
      uVar5 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
      uVar5 = FUN_0160073c(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar3);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x23);
      }
      FUN_02660dac(uVar5,0);
      uVar9 = FUN_015ff8a0();
      puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      if ((uVar9 & 1) != 0) {
LAB_00ebe8f8:
        puVar1 = Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__;
        if (*(int *)(unaff_x19 + 0x1c) != 0) {
          iStack0000000000000018 = *(int *)(unaff_x19 + 0x20);
          *(int *)(unaff_x19 + 0x1c) = iStack000000000000001c;
          puVar2 = Method_Unity_Collections_NativeSlice<float>_get_Item__;
          puVar1 = PTR_DAT_033ee470;
          if (iStack0000000000000018 == 0) {
            iStack0000000000000018 = iStack000000000000001c;
            uVar5 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000018);
            uVar5 = FUN_015f6780(*(undefined8 *)puVar2,uVar5,0);
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x23);
            }
            FUN_02660dac(uVar5,0);
          }
          else {
            uVar5 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000018);
            uVar5 = FUN_015f6780(*(undefined8 *)puVar1,uVar5,0);
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_00d32864(*unaff_x23);
            }
            FUN_02660dac(uVar5,0);
          }
          FUN_00ebea78();
          uVar5 = FUN_0268ee74();
          *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
          return;
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
        return;
      }
      *(undefined1 *)(unaff_x19 + 0x39) = 1;
      *(undefined8 *)(unaff_x19 + 0x40) = unaff_x20;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar7 != 0) {
        FUN_016f27fc();
        FUN_00fe0700();
        goto LAB_00ebe8f8;
      }
      goto LAB_00ebea18;
    }
  }
  plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
  iStack0000000000000018 = iStack000000000000001c;
  lVar7 = thunk_FUN_00d61fa0(*unaff_x24,&stack0x00000018);
  if (plVar6 == (long *)0x0) {
LAB_00ebea18:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_00ebea0c:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    puVar2 = StringLiteral_9958;
    bStack0000000000000014 = (byte)((uint)iStack000000000000001c >> 0x1f);
    lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000010 + 4);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_00ebea0c;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar4 = FUN_026be908(0);
      uStack0000000000000010 = iVar4 <= iStack000000000000001c;
      lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&stack0x00000010);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_00ebea0c;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x38);
        lVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_00ebea0c;
        puVar1 = System_Collections_Generic_Stack<WitResponseNode>_TypeInfo;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          uVar5 = FUN_01600be4(*(undefined8 *)puVar1,plVar6,0);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x23);
          }
          FUN_02660dac(uVar5,0);
          FUN_02660dac(*(undefined8 *)(unaff_x19 + 0x30),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


