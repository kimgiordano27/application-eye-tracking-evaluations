/*
FUNCTION_NAME: FUN_06280240
ENTRY_POINT: 06280240
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_21;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06280240(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long local_48;
  
  puVar1 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__;
  if ((DAT_06b8b9cd & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067629e8);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_SingleEraseAnchor_OnSingleEraseAsyncComplete__
                );
    FUN_02d6084c(PTR_DAT_06760eb0);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<InputActionType>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<int>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<RectOffset>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<float>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<string>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextAnchor>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__
                );
    FUN_02d6084c(PTR_DAT_067695f0);
    FUN_02d6084c(PTR_DAT_0676a350);
    FUN_02d6084c(PTR_DAT_0676a370);
    FUN_02d6084c(PTR_DAT_0676a358);
    FUN_02d6084c(PTR_DAT_0676a378);
    FUN_02d6084c(PTR_DAT_0676a360);
    FUN_02d6084c(PTR_DAT_0676a380);
    FUN_02d6084c(PTR_DAT_0676a368);
    FUN_02d6084c(PTR_DAT_0676a388);
    FUN_02d6084c(PTR_DAT_0675eb88);
    FUN_02d6084c(PTR_DAT_0675eb80);
    FUN_02d6084c(PTR_DAT_0676ad40);
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Texture2D>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Vector2>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Vector3>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__
                );
    FUN_02d6084c(
                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<WrapMode>__
                );
    DAT_06b8b9cd = 1;
  }
  lVar8 = *(long *)puVar1;
  local_48 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar8 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_06760eb0;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar8 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_04f7d1b0(lVar11,uVar12,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Vector3>__
                 ,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar9 = lVar11;
    thunk_FUN_02dd37b4(plVar9,lVar11);
  }
  puVar6 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Vector2>__;
  puVar5 = 
  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<Texture2D>__;
  puVar4 = PTR_DAT_067695f0;
  puVar2 = PTR_DAT_0675eb88;
  puVar1 = PTR_DAT_0675eb80;
  if (param_1 != (long *)0x0) {
    param_1[0x9c] = lVar11;
    thunk_FUN_02dd37b4(param_1 + 0x9c,lVar11);
    *(undefined1 *)((long)param_1 + 0x50c) = 0;
    param_1[0xa2] = 0x41b0000000000000;
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
    FUN_0504920c(lVar8,0);
    param_1[0xa8] = lVar8;
    thunk_FUN_02dd37b4(param_1 + 0xa8,lVar8);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_03a37a7c(lVar8,*(undefined8 *)puVar2);
    param_1[0xa9] = lVar8;
    thunk_FUN_02dd37b4(param_1 + 0xa9,lVar8);
    FUN_06183c3c(param_1,0);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar8 = *(long *)puVar4;
    }
    FUN_061cb6b0(param_1,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x748),0);
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_062808e4();
    puVar1 = PTR_DAT_0676ad40;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x28) = param_1[0xa9];
      thunk_FUN_02dd37b4();
      param_1[0xaa] = lVar8;
      thunk_FUN_02dd37b4(param_1 + 0xaa,lVar8);
      FUN_0627f198(param_1,1);
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
      FUN_062b9014(lVar8,0);
      plVar9 = param_1 + 0xa4;
      param_1[0xa4] = lVar8;
      thunk_FUN_02dd37b4(plVar9,lVar8);
      if (param_1[0xa4] != 0) {
        FUN_061cb6b0(param_1[0xa4],*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x788),0);
        puVar1 = 
        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextClipping>__
        ;
        if (*plVar9 != 0) {
          lVar8 = *(long *)(*plVar9 + 0x508);
          uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067629e8);
          FUN_047d1048(uVar12,param_1,*(undefined8 *)puVar1,0);
          puVar2 = 
          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<TextAnchor>__
          ;
          puVar1 = PTR_DAT_0676a380;
          if (lVar8 != 0) {
            FUN_062be9a8(lVar8,uVar12,0);
            lVar8 = param_1[0xa4];
            uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
            FUN_04cb597c(uVar12,param_1,*(undefined8 *)puVar2,0);
            puVar4 = 
            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<int>__;
            puVar2 = PTR_DAT_0676a388;
            puVar1 = PTR_DAT_0676a370;
            if (lVar8 != 0) {
              FUN_033511f0(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_0676a378);
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
              FUN_04cb597c(uVar12,param_1,*(undefined8 *)puVar4,0);
              FUN_033511f0(param_1,uVar12,0,*(undefined8 *)puVar1);
              puVar2 = 
              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<InputActionType>__
              ;
              puVar1 = PTR_DAT_0676a360;
              plVar10 = (long *)param_1[0xa4];
              if (plVar10 != (long *)0x0) {
                lVar8 = (**(code **)(*plVar10 + 0x9a8))(plVar10,*(undefined8 *)(*plVar10 + 0x9b0));
                uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                FUN_04cb597c(uVar12,param_1,*(undefined8 *)puVar2,0);
                if (lVar8 != 0) {
                  FUN_033511f0(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_0676a350);
                  puVar2 = 
                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<RectOffset>__
                  ;
                  puVar1 = PTR_DAT_0676a368;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 != (long *)0x0) {
                    lVar8 = (**(code **)(*plVar10 + 0x9a8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x9b0));
                    uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                    FUN_04cb597c(uVar12,param_1,*(undefined8 *)puVar2,0);
                    if (lVar8 != 0) {
                      FUN_033511f0(lVar8,uVar12,0,*(undefined8 *)PTR_DAT_0676a358);
                      local_48 = param_1[0x88];
                      FUN_061d4064(&local_48,param_1[0xa4],0);
                      plVar10 = (long *)param_1[0xa4];
                      if (plVar10 != (long *)0x0) {
                        plVar10 = (long *)(**(code **)(*plVar10 + 0x9a8))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x9b0));
                        if (plVar10 != (long *)0x0) {
                          (**(code **)(*plVar10 + 0x248))
                                    (plVar10,1,*(undefined8 *)(*plVar10 + 0x250));
                          plVar10 = (long *)*plVar9;
                          if (plVar10 != (long *)0x0) {
                            lVar8 = (**(code **)(*plVar10 + 0x9a8))
                                              (plVar10,*(undefined8 *)(*plVar10 + 0x9b0));
                            if (lVar8 != 0) {
                              uVar7 = FUN_061c5b60(lVar8,0);
                              FUN_061c5b88(lVar8,uVar7 & 0xfffffffd,0);
                              if (*plVar9 != 0) {
                                FUN_061c556c(*plVar9,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<WrapMode>__
                                             ,0);
                                if ((*plVar9 != 0) &&
                                   (lVar8 = *(long *)(*plVar9 + 0x508), lVar8 != 0)) {
                                  FUN_061c556c(lVar8,0,0);
                                  puVar4 = 
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<string>__
                                  ;
                                  puVar2 = 
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_DeserializeMember<float>__
                                  ;
                                  puVar1 = 
                                  Method_UnityEngine_XR_OpenXR_Features_Meta_SingleEraseAnchor_OnSingleEraseAsyncComplete__
                                  ;
                                  if ((*plVar9 != 0) &&
                                     (lVar8 = *(long *)(*plVar9 + 0x500), lVar8 != 0)) {
                                    FUN_061c556c(lVar8,0,0);
                                    (**(code **)(*param_1 + 0x248))
                                              (param_1,1,*(undefined8 *)(*param_1 + 0x250));
                                    FUN_061c5494(param_1,1,0);
                                    FUN_062f7220(param_1,1,0);
                                    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
                                    FUN_047d9078(lVar8,param_1,*(undefined8 *)puVar2,0);
                                    param_1[0xad] = lVar8;
                                    thunk_FUN_02dd37b4(param_1 + 0xad,lVar8);
                                    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                    FUN_04f7d1b0(lVar8,param_1,*(undefined8 *)puVar4,0);
                                    param_1[0xae] = lVar8;
                                    thunk_FUN_02dd37b4(param_1 + 0xae,lVar8);
                                    FUN_062800e8(param_1,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


