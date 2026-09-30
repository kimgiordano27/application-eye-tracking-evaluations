/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0339b97c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(int param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if ((bool)in_ZR) {
      FUN_030ca564();
      if (*(int *)(unaff_x27 + 0x18) < 1) {
LAB_0339bcd0:
        FUN_0339cf34();
        return;
      }
      plVar3 = (long *)FUN_030ca520();
    }
    else {
      if (param_1 != 2) {
        FUN_019b2708();
        uVar2 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000038 = 0xffffffffffffffff;
        in_stack_00000040 = uVar2;
        uVar5 = FUN_03307544(&stack0x00000030,0);
        uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_GetEnumerator__);
        FUN_03146988(uVar6,uVar5,0);
        uVar5 = FUN_0335cdc4();
        uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,uVar6);
      }
      plVar3 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                           System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                         );
      FUN_02d4f880(plVar3,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04237778) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0339bb10;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
LAB_0339bb10:
      (*(code *)*puVar4)(unaff_x20,plVar3,puVar4[1]);
      FUN_030ca5b8();
    }
    do {
      while( true ) {
        (**(code **)(*unaff_x19 + 0x1b8))();
        if (*(int *)(unaff_x27 + 0x18) != unaff_w24) break;
        uVar8 = FUN_0335ce1c();
        if ((uVar8 & 1) == 0) {
LAB_0339bcb0:
          FUN_0339d160();
          goto LAB_0339bcd0;
        }
        iVar1 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar1 != 5) {
          if (iVar1 == 0xe) {
            FUN_030ca564();
            plVar3 = (long *)FUN_030ca520();
            in_stack_00000048 = 0;
          }
          else {
            if (unaff_x26 == (long *)0x0) {
LAB_0339ba2c:
              uVar5 = FUN_033966b4();
            }
            else {
              uVar8 = (**(code **)(*unaff_x26 + 0x1a8))();
              if ((uVar8 & 1) == 0) goto LAB_0339ba2c;
              uVar5 = FUN_033962a0();
            }
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar7 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_0339bab0;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04237778,2);
LAB_0339bab0:
            (*(code *)*puVar4)(plVar3,uVar5,puVar4[1]);
          }
        }
      }
      uVar8 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar8 & 1) == 0) goto LAB_0339bcb0;
      param_1 = (**(code **)(*unaff_x19 + 0x188))();
    } while (param_1 == 5);
    in_ZR = param_1 == 0xe;
    unaff_x20 = plVar3;
  } while( true );
}


