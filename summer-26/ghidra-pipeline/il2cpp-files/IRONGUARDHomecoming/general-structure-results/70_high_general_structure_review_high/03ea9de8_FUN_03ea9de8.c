/*
FUNCTION_NAME: FUN_03ea9de8
ENTRY_POINT: 03ea9de8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03ea9de8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 local_54 [4];
  undefined1 local_48 [4];
  undefined4 local_44;
  
  puVar4 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
  if ((DAT_0483ab84 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
    thunk_FUN_01efb3a4(PTR_DAT_0457b7b0);
    thunk_FUN_01efb3a4(PTR_DAT_0457b7b8);
    thunk_FUN_01efb3a4(StringLiteral_5984);
    thunk_FUN_01efb3a4(PTR_DAT_0457b7a8);
    DAT_0483ab84 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0483ac63 == '\0') {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
    DAT_0483ac63 = '\x01';
  }
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar4;
  }
  plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)puVar3,4);
  puVar3 = PTR_DAT_0457b7b0;
  if (plVar6 == (long *)0x0) goto LAB_03eaa210;
  if (*(long *)PTR_DAT_0457b7b0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b7b0,*(undefined8 *)(*plVar6 + 0x40));
    if (lVar5 == 0) goto LAB_03eaa218;
    lVar5 = *(long *)puVar3;
  }
  if ((int)plVar6[3] == 0) goto LAB_03eaa214;
  plVar6[4] = lVar5;
  thunk_FUN_01f51358();
  if ((param_2 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
LAB_03eaa218:
    uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,0);
  }
  puVar3 = Method_System_DateTimeParse_ParseExact__;
  if (1 < *(uint *)(plVar6 + 3)) {
    plVar6[5] = param_2;
    thunk_FUN_01f51358(plVar6 + 5,param_2);
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar5 == 0) goto LAB_03eaa218;
      lVar5 = *(long *)puVar3;
    }
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar5;
      thunk_FUN_01f51358();
      if ((param_4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(param_4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
      goto LAB_03eaa218;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_03eaa214;
      plVar6[7] = param_4;
      thunk_FUN_01f51358(plVar6 + 7,param_4);
      uVar7 = FUN_0340ec80(plVar6,0);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x228))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x230));
        if (*(long *)(param_1 + 0x10) != 0) {
          if (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x2c)) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_0483ac63 == '\0') {
              thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
              DAT_0483ac63 = '\x01';
            }
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *(long *)puVar4;
            }
            puVar3 = PTR_DAT_0457b7a8;
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_03eaa210;
            local_44 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x2c);
            plVar6 = (long *)**(undefined8 **)(lVar5 + 0xb8);
            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                       ,&local_44);
            uVar7 = FUN_0340ea14(*(undefined8 *)puVar3,uVar7,0);
            if (plVar6 == (long *)0x0) goto LAB_03eaa210;
            (**(code **)(*plVar6 + 0x228))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x230));
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_03eaa210;
            cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x24);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_0483ac63 == '\0') {
              thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
              DAT_0483ac63 = '\x01';
            }
            lVar5 = *(long *)puVar4;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar5 = *(long *)puVar4;
            }
            if (*(long *)(param_1 + 0x10) == 0) goto LAB_03eaa210;
            uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x24);
            plVar6 = (long *)**(undefined8 **)(lVar5 + 0xb8);
            if (cVar1 == '\0') {
              local_54[0] = uVar2;
              uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                         ,local_54);
              puVar8 = (undefined8 *)PTR_DAT_0457b7b8;
            }
            else {
              local_48[0] = uVar2;
              uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                         ,local_48);
              puVar8 = (undefined8 *)StringLiteral_5984;
            }
            uVar7 = FUN_0340ea14(*puVar8,uVar7,0);
            if (plVar6 == (long *)0x0) goto LAB_03eaa210;
            (**(code **)(*plVar6 + 0x248))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x250));
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_0483ac63 == '\0') {
            thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
            DAT_0483ac63 = '\x01';
          }
          lVar5 = *(long *)puVar4;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar4;
          }
          plVar6 = (long *)**(long **)(lVar5 + 0xb8);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            return;
          }
        }
      }
LAB_03eaa210:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
LAB_03eaa214:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


