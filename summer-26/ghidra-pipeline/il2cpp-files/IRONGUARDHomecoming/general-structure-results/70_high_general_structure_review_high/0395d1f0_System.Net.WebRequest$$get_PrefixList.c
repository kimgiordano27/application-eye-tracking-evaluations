/*
FUNCTION_NAME: System.Net.WebRequest$$get_PrefixList
ENTRY_POINT: 0395d1f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 System_Net_WebRequest__get_PrefixList(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *unaff_x19;
  long *unaff_x21;
  uint unaff_w23;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x26;
  uint uVar10;
  
  uVar1 = (**(code **)(*unaff_x19 + 0x3c8))();
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x458))();
    uVar9 = *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteCharacter,_uint>__;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x26);
    }
    uVar9 = FUN_03579868(uVar9,0);
    uVar1 = FUN_03582560(uVar2,uVar9,0);
    if ((uVar1 & 1) == 0) goto LAB_0395d260;
    goto LAB_0395d750;
  }
LAB_0395d260:
  if ((unaff_w23 >> 4 & 1) == 0) goto LAB_0395d264;
  if (unaff_x19 == (long *)0x0) goto LAB_0395d770;
  uVar1 = FUN_03584674();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_0358471c();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_03584a50();
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_Rendering_DebugUpdater_CheckInputModuleExists__);
      }
      uVar1 = FUN_034b0da4(uVar2,0,0);
      if ((uVar1 & 1) != 0) goto LAB_0395d750;
    }
LAB_0395d264:
    uVar1 = FUN_02b6b4d8();
    if ((uVar1 & 1) != 0) {
      FUN_02b6b264();
      if (unaff_x19 == (long *)0x0) goto LAB_0395d770;
      uVar1 = (**(code **)(*unaff_x19 + 0x2a8))();
      if ((uVar1 & 1) == 0) goto LAB_0395d750;
    }
    lVar3 = (**(code **)(*unaff_x21 + 0x4a8))();
    if (lVar3 == 0) {
LAB_0395d770:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      do {
        if (uVar7 <= uVar10) {
LAB_0395d774:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar8 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
        if ((plVar8 == (long *)0x0) ||
           (((uVar1 = (**(code **)(*plVar8 + 0x3a8))(plVar8,*(undefined8 *)(*plVar8 + 0x3b0)),
             (uVar1 & 1) != 0 && (uVar1 = FUN_02b6b4d8(), (uVar1 & 1) != 0)) &&
            (plVar8 = (long *)FUN_02b6b264(), plVar8 == (long *)0x0)))) goto LAB_0395d770;
        uVar1 = (**(code **)(*plVar8 + 0x3a8))(plVar8,*(undefined8 *)(*plVar8 + 0x3b0));
        if ((uVar1 & 1) == 0) {
          uVar1 = FUN_035846d4(plVar8,0);
          if ((((uVar1 & 1) == 0) && (uVar1 = FUN_03583944(plVar8,0), (uVar1 & 1) == 0)) &&
             (uVar1 = FUN_0358471c(plVar8,0), (uVar1 & 1) == 0)) {
            thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_OnValidate__);
            FUN_01bc4c70();
            uVar2 = FUN_039550b4(plVar8);
            uVar9 = thunk_FUN_01efb3a4(StringLiteral_4038);
            uVar2 = FUN_03405678(uVar9,uVar2,0);
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
            uVar9 = thunk_FUN_01f117cc();
            Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar9,uVar2,0);
            uVar2 = thunk_FUN_01efb3a4(StringLiteral_4270);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar9,uVar2);
          }
          uVar1 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
          lVar6 = *plVar8;
          if ((uVar1 & 1) == 0) {
            uVar1 = (**(code **)(lVar6 + 0x2a8))(plVar8);
            goto joined_r0x0395d4a0;
          }
          lVar6 = (**(code **)(lVar6 + 0x458))(plVar8,*(undefined8 *)(lVar6 + 0x460));
          lVar4 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
          if (unaff_x19 == (long *)0x0) goto LAB_0395d770;
          uVar1 = (**(code **)(*unaff_x19 + 0x3c8))();
          if ((uVar1 & 1) == 0) {
LAB_0395d4a8:
            if (lVar6 == 0) goto LAB_0395d770;
            uVar1 = FUN_035846d4(lVar6,0);
            if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0
               ) {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Collections_CollectionBase_OnValidate__);
            }
            if ((uVar1 & 1) == 0) {
              uVar1 = FUN_03958e9c();
              if ((uVar1 & 1) == 0) goto LAB_0395d750;
              if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              lVar6 = FUN_039591c4();
            }
            else {
              uVar1 = FUN_03959010();
              if ((uVar1 & 1) == 0) goto LAB_0395d750;
              if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              lVar6 = FUN_03959480();
            }
          }
          else {
            uVar2 = (**(code **)(*unaff_x19 + 0x458))();
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__)
              ;
            }
            uVar1 = FUN_03582560(lVar6,uVar2,0);
            if ((uVar1 & 1) == 0) goto LAB_0395d4a8;
            lVar6 = (**(code **)(*unaff_x19 + 0x478))();
          }
          if (lVar4 == 0) goto LAB_0395d770;
          uVar7 = *(uint *)(lVar4 + 0x18);
          if (0 < (int)uVar7) {
            uVar5 = 0;
            do {
              if (uVar7 <= uVar5) goto LAB_0395d774;
              if (lVar6 == 0) goto LAB_0395d770;
              if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0395d774;
              plVar8 = *(long **)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
              if (plVar8 == (long *)0x0) goto LAB_0395d770;
              uVar2 = *(undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
              uVar1 = (**(code **)(*plVar8 + 0x3a8))(plVar8,*(undefined8 *)(*plVar8 + 0x3b0));
              if ((((uVar1 & 1) != 0) && (uVar1 = FUN_02b6b4d8(), (uVar1 & 1) != 0)) &&
                 (plVar8 = (long *)FUN_02b6b264(), plVar8 == (long *)0x0)) goto LAB_0395d770;
              uVar1 = (**(code **)(*plVar8 + 0x3a8))(plVar8,*(undefined8 *)(*plVar8 + 0x3b0));
              if ((uVar1 & 1) == 0) {
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ +
                            0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar1 = FUN_03583338(plVar8,uVar2,0);
                if ((uVar1 & 1) != 0) {
                  uVar1 = (**(code **)(*plVar8 + 0x2a8))
                                    (plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x2b0));
                  goto joined_r0x0395d688;
                }
              }
              else {
                uVar1 = FUN_02ee8304();
                if ((uVar1 & 1) == 0) {
                  if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0
                              ) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  uVar1 = FUN_0395cfe8(plVar8,uVar2);
joined_r0x0395d688:
                  if ((uVar1 & 1) == 0) goto LAB_0395d750;
                }
              }
              uVar7 = *(uint *)(lVar4 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)uVar7);
          }
        }
        else {
          if (*(int *)(*(long *)Method_System_Collections_CollectionBase_OnValidate__ + 0xe0) == 0)
          {
            thunk_FUN_01ee6d7c();
          }
          uVar1 = FUN_0395cfe8(plVar8);
joined_r0x0395d4a0:
          if ((uVar1 & 1) == 0) goto LAB_0395d750;
        }
        uVar7 = *(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar7);
    }
    FUN_02b6b2d0();
    uVar2 = 1;
  }
  else {
LAB_0395d750:
    uVar2 = 0;
  }
  return uVar2;
}


