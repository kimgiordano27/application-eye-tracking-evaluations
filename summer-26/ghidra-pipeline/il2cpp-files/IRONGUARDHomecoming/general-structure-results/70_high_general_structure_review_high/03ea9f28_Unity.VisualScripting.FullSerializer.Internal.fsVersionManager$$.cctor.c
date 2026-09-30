/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsVersionManager$$.cctor
ENTRY_POINT: 03ea9f28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_Internal_fsVersionManager___cctor
               (undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined1 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((int)unaff_x23[3] == 0) goto LAB_03eaa214;
  unaff_x23[4] = param_2;
  thunk_FUN_01f51358();
  if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_01f116d0(), lVar4 == 0)) {
LAB_03eaa218:
    uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,0);
  }
  puVar3 = Method_System_DateTimeParse_ParseExact__;
  if (1 < *(uint *)(unaff_x23 + 3)) {
    unaff_x23[5] = unaff_x21;
    thunk_FUN_01f51358();
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar4 == 0) goto LAB_03eaa218;
      lVar4 = *(long *)puVar3;
    }
    if (2 < *(uint *)(unaff_x23 + 3)) {
      unaff_x23[6] = lVar4;
      thunk_FUN_01f51358();
      if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_01f116d0(), lVar4 == 0)) goto LAB_03eaa218;
      if (*(uint *)(unaff_x23 + 3) < 4) goto LAB_03eaa214;
      unaff_x23[7] = unaff_x20;
      thunk_FUN_01f51358();
      FUN_0340ec80();
      if (unaff_x22 != (long *)0x0) {
        (**(code **)(*unaff_x22 + 0x228))();
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          if (0 < *(int *)(*(long *)(unaff_x19 + 0x10) + 0x2c)) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (*(char *)(unaff_x25 + 0xc63) == '\0') {
              thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
              *(undefined1 *)(unaff_x25 + 0xc63) = 1;
            }
            lVar4 = *unaff_x24;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *unaff_x24;
            }
            puVar3 = PTR_DAT_0457b7a8;
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_03eaa210;
            uStack000000000000001c = *(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x2c);
            plVar7 = (long *)**(undefined8 **)(lVar4 + 0xb8);
            uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                       ,(long)&stack0x00000018 + 4);
            uVar5 = FUN_0340ea14(*(undefined8 *)puVar3,uVar5,0);
            if (plVar7 == (long *)0x0) goto LAB_03eaa210;
            (**(code **)(*plVar7 + 0x228))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x230));
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_03eaa210;
            cVar1 = *(char *)(*(long *)(unaff_x19 + 0x10) + 0x24);
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (*(char *)(unaff_x25 + 0xc63) == '\0') {
              thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
              *(undefined1 *)(unaff_x25 + 0xc63) = 1;
            }
            lVar4 = *unaff_x24;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *unaff_x24;
            }
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_03eaa210;
            uVar2 = *(undefined1 *)(*(long *)(unaff_x19 + 0x10) + 0x24);
            plVar7 = (long *)**(undefined8 **)(lVar4 + 0xb8);
            if (cVar1 == '\0') {
              in_stack_00000008._4_1_ = uVar2;
              uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                         ,(long)&stack0x00000008 + 4);
              puVar6 = (undefined8 *)PTR_DAT_0457b7b8;
            }
            else {
              uStack0000000000000018 = uVar2;
              uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                          Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                         ,&stack0x00000018);
              puVar6 = (undefined8 *)StringLiteral_5984;
            }
            uVar5 = FUN_0340ea14(*puVar6,uVar5,0);
            if (plVar7 == (long *)0x0) goto LAB_03eaa210;
            (**(code **)(*plVar7 + 0x248))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x250));
          }
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (*(char *)(unaff_x25 + 0xc63) == '\0') {
            thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
            *(undefined1 *)(unaff_x25 + 0xc63) = 1;
          }
          lVar4 = *unaff_x24;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *unaff_x24;
          }
          plVar7 = (long *)**(long **)(lVar4 + 0xb8);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
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


