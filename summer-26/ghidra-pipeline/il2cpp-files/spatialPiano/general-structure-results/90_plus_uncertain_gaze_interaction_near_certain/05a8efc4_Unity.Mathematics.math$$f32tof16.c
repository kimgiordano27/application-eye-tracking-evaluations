/*
FUNCTION_NAME: Unity.Mathematics.math$$f32tof16
ENTRY_POINT: 05a8efc4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 146
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


void Unity_Mathematics_math__f32tof16(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x21;
  void *__src;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xe20));
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<Transform>__ctor__
              );
  FUN_02f08768(Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
              );
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceBoolValueReader>__ctor__
              );
  FUN_02f08768(Method_System_ValueTuple<byte[],_int,_int>__ctor__);
  FUN_02f08768(Method_System_ValueTuple<string[],_string[],_string>__ctor__);
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x21 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar10 = thunk_FUN_02f45270();
    uVar11 = thunk_FUN_02f6ef30(PTR_DAT_067ca368);
    FUN_0504ee1c(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(
                               Method_System_ValueTuple<bool,_VisitReturnCode,_BindingResult>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  lVar7 = FUN_05a77570();
  puVar3 = Method_System_ValueTuple<OVRPlugin_Result,_string>__ctor__;
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceBoolValueReader>__ctor__
  ;
  if (lVar7 == 0) {
    thunk_FUN_02f6ef30(Method_System_ValueTuple<DepthRaycastResult,_Vector3,_int>__ctor__);
    uVar10 = FUN_04f65e2c();
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar11 = thunk_FUN_02f45270();
    uVar12 = thunk_FUN_02f6ef30(PTR_DAT_067ca368);
    FUN_0504ee88(uVar11,uVar10,uVar12,0);
    uVar10 = thunk_FUN_02f6ef30(
                               Method_System_ValueTuple<bool,_VisitReturnCode,_BindingResult>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar11,uVar10);
  }
  FUN_05a7ce3c(lVar7,0);
  _in_stack_00000010 = FUN_05a778b8();
  lVar8 = FUN_04047d24(&stack0x00000010,*(undefined8 *)puVar2);
  uVar5 = FUN_032efe3c(*(undefined8 *)(lVar7 + 0x28));
  FUN_032ed738((undefined8 *)(lVar7 + 0x28),uVar5,*(undefined8 *)puVar3);
  lVar13 = *(long *)(lVar7 + 0x30);
  *(undefined8 *)(unaff_x21 + 200) = 0;
  *(long *)(unaff_x21 + 0x40) = lVar8;
  if ((lVar13 != 0) && (lVar8 != 0)) {
    iVar6 = *(int *)(lVar13 + 0x18) - *(int *)(lVar8 + 0x18);
    if (iVar6 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_02f0880c(*(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<Transform>__ctor__
                            ,iVar6);
      puVar4 = Method_System_ValueTuple<byte[],_int,_int>__ctor__;
      puVar3 = Method_System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>__ctor__
      ;
      puVar2 = Method_System_ValueTuple<RichTextTagParser_TagType,_string>__ctor__;
      lVar14 = *(long *)(lVar7 + 0x30);
      if (lVar14 == 0) goto LAB_05a8f1fc;
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar16 = 0;
        uVar15 = 0;
        __src = (void *)(lVar14 + 0x20);
        do {
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_System_ValueTuple<string[],_string[],_string>__ctor__);
          FUN_05116b38(lVar9,0);
          if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_05a8f200:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (lVar9 == 0) goto LAB_05a8f1fc;
          memmove((void *)(lVar9 + 0x10),__src,0x58);
          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_03f6527c(uVar10,lVar9,*(undefined8 *)puVar4,0);
          iVar6 = FUN_032ef734(lVar8,uVar10,*(undefined8 *)puVar2);
          if (iVar6 == -1) {
            if (lVar13 == 0) goto LAB_05a8f1fc;
            if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_05a8f200;
            lVar1 = (long)(int)uVar16;
            uVar16 = uVar16 + 1;
            memmove((void *)(lVar13 + lVar1 * 0x58 + 0x20),(void *)(lVar9 + 0x10),0x58);
          }
          uVar15 = uVar15 + 1;
          __src = (void *)((long)__src + 0x58);
        } while ((long)uVar15 < (long)*(int *)(lVar14 + 0x18));
      }
    }
    *(long *)(lVar7 + 0x30) = lVar13;
    FUN_05a7d12c(lVar7,0);
    return;
  }
LAB_05a8f1fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


