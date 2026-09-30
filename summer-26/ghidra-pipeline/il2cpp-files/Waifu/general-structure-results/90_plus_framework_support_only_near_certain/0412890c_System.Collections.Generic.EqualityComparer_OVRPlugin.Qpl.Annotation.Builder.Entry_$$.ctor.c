/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<OVRPlugin.Qpl.Annotation.Builder.Entry>$$.ctor
ENTRY_POINT: 0412890c
PROGRAM: Waifu-libil2cpp.so
SCORE: 156
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long System_Collections_Generic_EqualityComparer<OVRPlugin_Qpl_Annotation_Builder_Entry>___ctor
               (undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  ulong in_stack_00000008;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d23b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2a78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083bd890,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083bd898,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083bd8a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844c850,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842e8f8,1);
  DataMemoryBarrier(2,3);
  lVar7 = *(long *)(unaff_x19 + 0x38);
  if (lVar7 == 0) {
    FUN_0338f674();
    lVar7 = *(long *)(unaff_x19 + 0x38);
  }
  uVar9 = *(undefined8 *)(lVar7 + 8);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  plVar3 = (long *)FUN_0683eca4(uVar9,0);
  if (plVar3 == (long *)0x0) {
LAB_04128df8:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  plVar3 = (long *)FUN_0683eca4(DAT_083bd8a0,0);
  if (plVar3 == (long *)0x0) goto LAB_04128df8;
  uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  uVar5 = FUN_0666e380(uVar9,uVar4,0);
  uVar4 = DAT_083bd530;
  if ((uVar5 & 1) != 0) goto LAB_04128be0;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  plVar3 = (long *)FUN_0683eca4(uVar4,0);
  if (plVar3 == (long *)0x0) goto LAB_04128df8;
  uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  uVar5 = FUN_0666e380(uVar9,uVar4,0);
  uVar4 = DAT_083bccc0;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar3 = (long *)FUN_0683eca4(uVar4,0);
    if (plVar3 == (long *)0x0) goto LAB_04128df8;
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_0666e380(uVar9,uVar4,0);
    uVar4 = DAT_083bd378;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar3 = (long *)FUN_0683eca4(uVar4,0);
      if (plVar3 == (long *)0x0) goto LAB_04128df8;
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      uVar5 = FUN_0666e380(uVar9,uVar4,0);
      uVar4 = DAT_083bc5a0;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        plVar3 = (long *)FUN_0683eca4(uVar4,0);
        if (plVar3 == (long *)0x0) goto LAB_04128df8;
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        uVar5 = FUN_0666e380(uVar9,uVar4,0);
        uVar4 = DAT_083bc278;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          plVar3 = (long *)FUN_0683eca4(uVar4,0);
          if (plVar3 == (long *)0x0) goto LAB_04128df8;
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          uVar5 = FUN_0666e380(uVar9,uVar4,0);
          uVar4 = DAT_083bbfa0;
          if ((uVar5 & 1) == 0) {
            if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            plVar3 = (long *)FUN_0683eca4(uVar4,0);
            if (plVar3 == (long *)0x0) goto LAB_04128df8;
            uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            uVar5 = FUN_0666e380(uVar9,uVar4,0);
            uVar4 = DAT_083bd890;
            if ((uVar5 & 1) == 0) {
              if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              plVar3 = (long *)FUN_0683eca4(uVar4,0);
              if (plVar3 == (long *)0x0) goto LAB_04128df8;
              uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
              uVar5 = FUN_0666e380(uVar9,uVar4,0);
              uVar4 = DAT_083bd898;
              if ((uVar5 & 1) == 0) {
                if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
                  FUN_033b9870();
                }
                plVar3 = (long *)FUN_0683eca4(uVar4,0);
                if (plVar3 == (long *)0x0) goto LAB_04128df8;
                uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                uVar5 = FUN_0666e380(uVar9,uVar4,0);
                if ((uVar5 & 1) == 0) {
                  uVar9 = FUN_0666ec64(DAT_0844c850,uVar9,DAT_0842e8f8,0);
                  if (*(int *)(DAT_083d2a78 + 0xe0) == 0) {
                    FUN_033b9870(DAT_083d2a78);
                  }
                  FUN_063f52c8(uVar9,0,0);
                  unaff_x21 = unaff_x20;
                  goto LAB_04128be0;
                }
                pcVar8 = *(code **)(*unaff_x21 + 0x308);
              }
              else {
                pcVar8 = *(code **)(*unaff_x21 + 0x2e8);
              }
            }
            else {
              pcVar8 = *(code **)(*unaff_x21 + 0x2f8);
            }
            goto Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>__EndInvoke;
          }
          uVar1 = (**(code **)(*unaff_x21 + 0x2c8))();
          in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,uVar1) & 0xffffffffffffff01;
          uVar9 = DAT_083c9230;
        }
        else {
          in_stack_00000008 = (**(code **)(*unaff_x21 + 0x2a8))();
          uVar9 = DAT_083ca8e0;
        }
      }
      else {
        uVar2 = (**(code **)(*unaff_x21 + 0x288))();
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
        uVar9 = DAT_083d1220;
      }
    }
    else {
      uVar2 = (**(code **)(*unaff_x21 + 0x268))();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar2);
      uVar9 = DAT_083cda98;
    }
    unaff_x21 = (long *)FUN_03398650(uVar9,&stack0x00000008);
  }
  else {
    pcVar8 = *(code **)(*unaff_x21 + 0x1c8);
Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>__EndInvoke:
    unaff_x21 = (long *)(*pcVar8)();
  }
LAB_04128be0:
  lVar7 = **(long **)(unaff_x19 + 0x38);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0338f618(lVar7);
  }
  if (unaff_x21 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_0339898c(unaff_x21,lVar7);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(unaff_x21,lVar7);
    }
  }
  return lVar6;
}


