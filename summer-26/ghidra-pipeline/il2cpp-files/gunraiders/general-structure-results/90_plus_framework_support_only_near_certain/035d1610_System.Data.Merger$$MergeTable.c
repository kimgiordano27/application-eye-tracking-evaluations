/*
FUNCTION_NAME: System.Data.Merger$$MergeTable
ENTRY_POINT: 035d1610
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035d1bdc) */

void System_Data_Merger__MergeTable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  
  FUN_01c5d288();
  FUN_01c5d288(Method_System_WeakReference<RegexReplacement>_TryGetTarget__);
  FUN_01c5d288(Method_System_WeakReference<SslStream>__ctor__);
  FUN_01c5d288(Method_System_WeakReference<SslStream>_TryGetTarget__);
  FUN_01c5d288(PTR_DAT_042327d0);
  *(undefined1 *)(unaff_x20 + 0xd2a) = 1;
  in_stack_00000018 = 0;
  FUN_03313b6c();
  plVar7 = (long *)thunk_FUN_01c496e0(*unaff_x26);
  FUN_03ce62b4(plVar7,*(undefined8 *)
                       Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__,0);
  puVar3 = PTR_DAT_042305b8;
  puVar1 = PTR_DAT_0422fce8;
  puVar2 = PTR_DAT_0422fae0;
  plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  puVar4 = Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((*(long *)Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__ != 0) &&
     (lVar9 = thunk_FUN_01c495e4(*(long *)
                                  Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__,
                                 *(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
    uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar8[4] = *(long *)puVar4;
  puVar5 = Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__;
  puVar4 = OVRPlugin_Vector2f___TypeInfo;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar8 = (long *)FUN_021fb584(plVar7,*(undefined8 *)
                                        Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__
                                ,plVar8,*(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
  if (plVar8 == (long *)0x0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d04168(*(undefined8 *)Method_System_WeakReference<SslStream>_TryGetTarget__,0);
    iVar17 = 3;
  }
  else {
    lVar9 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_035d1784;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar1,0);
LAB_035d1784:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
    plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
    puVar6 = Method_System_WeakReference<RegexReplacement>_TryGetTarget__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(long *)Method_System_WeakReference<RegexReplacement>_TryGetTarget__ != 0) &&
       (lVar9 = thunk_FUN_01c495e4(*(long *)
                                    Method_System_WeakReference<RegexReplacement>_TryGetTarget__,
                                   *(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
      uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar11,0);
    }
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar8[4] = *(long *)puVar6;
    plVar8 = (long *)FUN_021fb584(plVar7,*(undefined8 *)puVar5,plVar8,*(undefined8 *)puVar4);
    if (plVar8 == (long *)0x0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d04168(*(undefined8 *)Method_System_WeakReference<Camera>_TryGetTarget__,0);
      iVar17 = 3;
      iVar18 = 3;
    }
    else {
      lVar9 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_035d1870;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar1,0);
LAB_035d1870:
      (*(code *)*puVar10)(plVar8,puVar10[1]);
      iVar17 = 7;
      iVar18 = 7;
    }
    if (plVar7 == (long *)0x0) goto LAB_035d18e0;
  }
  iVar18 = iVar17;
  lVar9 = *plVar7;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
        puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_035d18d4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar1,0);
LAB_035d18d4:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_035d18e0:
  puVar1 = Method_System_WeakReference<Camera>__ctor__;
  if ((iVar18 != 0) && (iVar18 != 7)) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar1,0);
  uVar11 = thunk_FUN_01c496e0(*unaff_x26);
  FUN_03ce62b4(uVar11,*(undefined8 *)PTR_DAT_04237300,0);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
  puVar1 = Method_System_WeakReference<RegexReplacement>__ctor__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar1,0);
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar11 = FUN_021fcd74(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_042327d0,
                        *(undefined8 *)PTR_DAT_04237308);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
  puVar4 = Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__;
  puVar1 = PTR_DAT_0422f958;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar4,0);
  lVar15 = *(long *)puVar1;
  lVar9 = *(long *)(lVar15 + 0x38);
  if (lVar9 == 0) {
    FUN_01c723f0(lVar15);
    lVar9 = *(long *)(lVar15 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01c72394();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01c72394();
  }
  uVar16 = **(undefined8 **)(lVar9 + 0xb8);
  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04237310);
  FUN_03ce8eb4(uVar11,*(undefined8 *)Method_System_WeakReference<SslStream>__ctor__,uVar16,0);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar11;
  puVar1 = Method_System_WeakReference<RegexReplacement>_SetTarget__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar1,0);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar15 = *(long *)(unaff_x19 + 0x18);
  if ((lVar15 != 0) &&
     (lVar12 = thunk_FUN_01c495e4(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
    uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,0);
  }
  if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar7[4] = lVar15;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  thunk_FUN_03ce9154(lVar9,*(undefined8 *)
                            Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__,plVar7,0);
  puVar1 = Method_UnityEngine_Rendering_VolumeParameter<TextureCurve>__ctor__;
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Texture>_GetHashCode__;
  uVar11 = FUN_01c5d2fc(*(undefined8 *)puVar3,1);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar11;
  uVar11 = FUN_01c5d2fc(*(undefined8 *)puVar2,0x100);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar11;
  plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar1,0x100);
  *(long **)(unaff_x19 + 0x60) = plVar7;
  puVar2 = PTR_DAT_0422fd80;
  if (plVar7 != (long *)0x0) {
    uVar19 = 0;
    do {
      if (uVar19 == *(uint *)(plVar7 + 3)) {
        *(undefined1 *)(unaff_x19 + 0x2a) = 1;
        return;
      }
      plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar3,1);
      in_stack_00000008._4_4_ = uVar19;
      lVar9 = thunk_FUN_01c49334(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
      if (plVar8 == (long *)0x0) break;
      if ((lVar9 != 0) &&
         (lVar15 = thunk_FUN_01c495e4(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0)) {
LAB_035d1bc4:
        uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar11,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_035d1bc0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar8[4] = lVar9;
      lVar9 = thunk_FUN_01c495e4(plVar8,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar9 == 0) goto LAB_035d1bc4;
      if (*(uint *)(plVar7 + 3) <= uVar19) goto LAB_035d1bc0;
      plVar7[(long)(int)uVar19 + 4] = (long)plVar8;
      plVar7 = *(long **)(unaff_x19 + 0x60);
      uVar19 = uVar19 + 1;
    } while (plVar7 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


