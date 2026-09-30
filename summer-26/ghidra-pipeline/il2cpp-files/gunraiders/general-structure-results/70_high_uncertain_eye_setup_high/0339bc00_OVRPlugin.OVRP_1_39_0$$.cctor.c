/*
FUNCTION_NAME: OVRPlugin.OVRP_1_39_0$$.cctor
ENTRY_POINT: 0339bc00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_39_0___cctor(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  char cStack0000000000000048;
  int iStack000000000000004c;
  
  thunk_FUN_01c495e4();
  uVar6 = FUN_03393b30();
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c01e80(in_stack_00000018);
  }
  FUN_03396b58();
  thunk_FUN_01c273e8(PTR_DAT_04235500);
  cVar1 = cStack0000000000000048;
  if (cStack0000000000000048 != '\0') {
    iVar2 = iStack000000000000004c;
    thunk_FUN_01c273e8(UnityEngine_UIElements_IPointerEvent_TypeInfo);
    thunk_FUN_01c273e8(PTR_DAT_04235500);
    if ((cVar1 != '\0') && (in_stack_00000020._4_4_ == iVar2)) {
      thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_GetPooled__);
      uVar7 = FUN_0335d3b4();
OVRPlugin_OVRP_1_42_0__ovrp_GetAdaptiveGpuPerformanceScale2:
      uVar8 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar8);
    }
  }
  uVar7 = thunk_FUN_01c273e8(PTR_DAT_04230980);
  FUN_02f20da0(&stack0x00000048,in_stack_00000020._4_4_,uVar7);
  do {
    while( true ) {
      (**(code **)(*unaff_x19 + 0x1b8))();
      if (*(int *)(unaff_x27 + 0x18) == unaff_w24) break;
      uVar6 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar6 & 1) == 0) goto LAB_0339bcb0;
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 5) {
        if (iVar2 == 0xe) {
          FUN_030ca564();
          if (*(int *)(unaff_x27 + 0x18) < 1) goto LAB_0339bcd0;
          unaff_x20 = (long *)FUN_030ca520();
        }
        else {
          if (iVar2 != 2) {
            FUN_019b2708();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
            in_stack_00000038 = 0xffffffffffffffff;
            in_stack_00000040 = uVar3;
            uVar7 = FUN_03307544(&stack0x00000030,0);
            uVar8 = thunk_FUN_01c273e8(
                                      Method_System_Collections_Generic_HashSet<int>_GetEnumerator__
                                      );
            FUN_03146988(uVar8,uVar7,0);
            uVar7 = FUN_0335cdc4();
            goto OVRPlugin_OVRP_1_42_0__ovrp_GetAdaptiveGpuPerformanceScale2;
          }
          plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                               System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                             );
          FUN_02d4f880(plVar4,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
          if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar9 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04237778) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_0339bb10;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
LAB_0339bb10:
          (*(code *)*puVar5)(unaff_x20,plVar4,puVar5[1]);
          FUN_030ca5b8();
          unaff_x20 = plVar4;
        }
      }
    }
    uVar6 = FUN_0335ce1c();
    if ((uVar6 & 1) == 0) {
LAB_0339bcb0:
      FUN_0339d160();
LAB_0339bcd0:
      FUN_0339cf34();
      return;
    }
    iVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar2 != 5) {
      if (iVar2 == 0xe) {
        FUN_030ca564();
        unaff_x20 = (long *)FUN_030ca520();
        _cStack0000000000000048 = 0;
      }
      else {
        if (unaff_x26 == (long *)0x0) {
LAB_0339ba2c:
          uVar7 = FUN_033966b4();
        }
        else {
          uVar6 = (**(code **)(*unaff_x26 + 0x1a8))();
          if ((uVar6 & 1) == 0) goto LAB_0339ba2c;
          uVar7 = FUN_033962a0();
        }
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar9 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04237778) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_0339bab0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
LAB_0339bab0:
        (*(code *)*puVar5)(unaff_x20,uVar7,puVar5[1]);
      }
    }
  } while( true );
}


