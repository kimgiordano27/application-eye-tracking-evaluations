/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodeOrientationValid
ENTRY_POINT: 0339ba7c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodeOrientationValid
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong in_x9;
  int *piVar9;
  int *in_x10;
  long in_x11;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if (in_x11 == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_0339bab0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,param_3,2);
LAB_0339bab0:
        (*(code *)*puVar5)(unaff_x20,unaff_x23,puVar5[1]);
LAB_0339b8bc:
        do {
          while( true ) {
            (**(code **)(*unaff_x19 + 0x1b8))();
            if (*(int *)(unaff_x27 + 0x18) == unaff_w24) break;
            uVar3 = (**(code **)(*unaff_x19 + 0x1d8))();
            if ((uVar3 & 1) == 0) goto LAB_0339bcb0;
            iVar1 = (**(code **)(*unaff_x19 + 0x188))();
            if (iVar1 != 5) {
              if (iVar1 == 0xe) {
                FUN_030ca564();
                if (*(int *)(unaff_x27 + 0x18) < 1) {
LAB_0339bcd0:
                  FUN_0339cf34();
                  return;
                }
                unaff_x20 = (long *)FUN_030ca520();
              }
              else {
                if (iVar1 != 2) {
                  FUN_019b2708();
                  uVar2 = (**(code **)(*unaff_x19 + 0x188))();
                  in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
                  in_stack_00000038 = 0xffffffffffffffff;
                  in_stack_00000040 = uVar2;
                  uVar6 = FUN_03307544(&stack0x00000030,0);
                  uVar7 = thunk_FUN_01c273e8(
                                            Method_System_Collections_Generic_HashSet<int>_GetEnumerator__
                                            );
                  FUN_03146988(uVar7,uVar6,0);
                  uVar6 = FUN_0335cdc4();
                  uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar6,uVar7);
                }
                plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                                                                                          
                                                  System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                                  );
                FUN_02d4f880(plVar4,*(undefined8 *)
                                     MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
                if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d4a4();
                }
                lVar8 = *unaff_x20;
                uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar3 != 0) {
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04237778) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_0339bb10;
                    }
                    uVar3 = uVar3 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar3 != 0);
                }
                puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
LAB_0339bb10:
                (*(code *)*puVar5)(unaff_x20,plVar4,puVar5[1]);
                FUN_030ca5b8();
                unaff_x20 = plVar4;
              }
            }
          }
          uVar3 = FUN_0335ce1c();
          if ((uVar3 & 1) == 0) {
LAB_0339bcb0:
            FUN_0339d160();
            goto LAB_0339bcd0;
          }
          iVar1 = (**(code **)(*unaff_x19 + 0x188))();
        } while (iVar1 == 5);
        if (iVar1 == 0xe) {
          FUN_030ca564();
          unaff_x20 = (long *)FUN_030ca520();
          in_stack_00000048 = 0;
          goto LAB_0339b8bc;
        }
        if (unaff_x26 == (long *)0x0) {
LAB_0339ba2c:
          unaff_x23 = FUN_033966b4();
        }
        else {
          uVar3 = (**(code **)(*unaff_x26 + 0x1a8))();
          if ((uVar3 & 1) == 0) goto LAB_0339ba2c;
          unaff_x23 = FUN_033962a0();
        }
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        param_1 = *unaff_x20;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)PTR_DAT_04237778;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


