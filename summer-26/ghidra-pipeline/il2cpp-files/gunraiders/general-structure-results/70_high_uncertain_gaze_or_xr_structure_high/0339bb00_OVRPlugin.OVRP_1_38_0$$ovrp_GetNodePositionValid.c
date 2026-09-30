/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0339bb00
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


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x0339bb00:
  puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
  plVar9 = unaff_x20;
  unaff_x20 = unaff_x29;
  do {
    (*(code *)*puVar5)(plVar9,unaff_x20,puVar5[1]);
    FUN_030ca5b8();
LAB_0339b8bc:
    do {
      while( true ) {
        (**(code **)(*unaff_x19 + 0x1b8))();
        if (*(int *)(unaff_x27 + 0x18) != unaff_w24) break;
        uVar3 = FUN_0335ce1c();
        if ((uVar3 & 1) == 0) {
LAB_0339bcb0:
          FUN_0339d160();
          goto LAB_0339bcd0;
        }
        iVar1 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar1 != 5) {
          if (iVar1 == 0xe) {
            FUN_030ca564();
            unaff_x20 = (long *)FUN_030ca520();
            in_stack_00000048 = 0;
          }
          else {
            if (unaff_x26 == (long *)0x0) {
LAB_0339ba2c:
              uVar4 = FUN_033966b4();
            }
            else {
              uVar3 = (**(code **)(*unaff_x26 + 0x1a8))();
              if ((uVar3 & 1) == 0) goto LAB_0339ba2c;
              uVar4 = FUN_033962a0();
            }
            if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            lVar7 = *unaff_x20;
            uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar3 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04237778) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_0339bab0;
                }
                uVar3 = uVar3 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
LAB_0339bab0:
            (*(code *)*puVar5)(unaff_x20,uVar4,puVar5[1]);
          }
        }
      }
      uVar3 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar3 & 1) == 0) goto LAB_0339bcb0;
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    } while (iVar1 == 5);
    if (iVar1 == 0xe) {
      FUN_030ca564();
      if (*(int *)(unaff_x27 + 0x18) < 1) {
LAB_0339bcd0:
        FUN_0339cf34();
        return;
      }
      unaff_x20 = (long *)FUN_030ca520();
      goto LAB_0339b8bc;
    }
    if (iVar1 != 2) {
      FUN_019b2708();
      uVar2 = (**(code **)(*unaff_x19 + 0x188))();
      in_stack_00000030 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
      in_stack_00000038 = 0xffffffffffffffff;
      in_stack_00000040 = uVar2;
      uVar4 = FUN_03307544(&stack0x00000030,0);
      uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_GetEnumerator__);
      FUN_03146988(uVar6,uVar4,0);
      uVar4 = FUN_0335cdc4();
      uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<int>_Remove__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar6);
    }
    unaff_x29 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                            System_Runtime_Remoting_Contexts_CrossContextChannel_TypeInfo
                                          );
    FUN_02d4f880(unaff_x29,*(undefined8 *)MQTTnet_Implementations_CrossPlatformSocket_TypeInfo);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    param_1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *(long *)PTR_DAT_04237778) goto code_r0x0339bb00;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(unaff_x20,*(long *)PTR_DAT_04237778,2);
    plVar9 = unaff_x20;
    unaff_x20 = unaff_x29;
  } while( true );
}


