/*
FUNCTION_NAME: FUN_035d14e4
ENTRY_POINT: 035d14e4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035d1bdc) */

void FUN_035d14e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint local_74 [3];
  undefined4 local_68;
  
  puVar1 = PTR_DAT_0422f988;
  if ((DAT_04537d2a & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f988);
    FUN_01c5d288(OVRPlugin_Vector2f___TypeInfo);
    FUN_01c5d288(PTR_DAT_04237308);
    FUN_01c5d288(PTR_DAT_04237310);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Texture>_GetHashCode__);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<TextureCurve>__ctor__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__);
    FUN_01c5d288(PTR_DAT_04237300);
    FUN_01c5d288(Method_System_WeakReference<Camera>__ctor__);
    FUN_01c5d288(Method_System_WeakReference<Camera>_TryGetTarget__);
    FUN_01c5d288(Method_System_WeakReference<RegexReplacement>__ctor__);
    FUN_01c5d288(Method_System_WeakReference<RegexReplacement>_SetTarget__);
    FUN_01c5d288(Method_System_WeakReference<RegexReplacement>_TryGetTarget__);
    FUN_01c5d288(Method_System_WeakReference<SslStream>__ctor__);
    FUN_01c5d288(Method_System_WeakReference<SslStream>_TryGetTarget__);
    FUN_01c5d288(PTR_DAT_042327d0);
    DAT_04537d2a = 1;
  }
  local_68 = 0;
  FUN_03313b6c(param_1,0);
  plVar8 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03ce62b4(plVar8,*(undefined8 *)
                       Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__,0);
  puVar4 = PTR_DAT_042305b8;
  puVar3 = PTR_DAT_0422fce8;
  puVar2 = PTR_DAT_0422fae0;
  plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
  puVar5 = Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((*(long *)Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__ != 0) &&
     (lVar10 = thunk_FUN_01c495e4(*(long *)
                                   Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__,
                                  *(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
    uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar12,0);
  }
  if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar9[4] = *(long *)puVar5;
  puVar6 = Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__;
  puVar5 = OVRPlugin_Vector2f___TypeInfo;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  plVar9 = (long *)FUN_021fb584(plVar8,*(undefined8 *)
                                        Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__
                                ,plVar9,*(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
  if (plVar9 == (long *)0x0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d04168(*(undefined8 *)Method_System_WeakReference<SslStream>_TryGetTarget__,0);
    iVar18 = 3;
  }
  else {
    lVar10 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_035d1784;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar9,*(long *)puVar3,0);
LAB_035d1784:
    (*(code *)*puVar11)(plVar9,puVar11[1]);
    plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar4,1);
    puVar7 = Method_System_WeakReference<RegexReplacement>_TryGetTarget__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if ((*(long *)Method_System_WeakReference<RegexReplacement>_TryGetTarget__ != 0) &&
       (lVar10 = thunk_FUN_01c495e4(*(long *)
                                     Method_System_WeakReference<RegexReplacement>_TryGetTarget__,
                                    *(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
      uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar12,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar9[4] = *(long *)puVar7;
    plVar9 = (long *)FUN_021fb584(plVar8,*(undefined8 *)puVar6,plVar9,*(undefined8 *)puVar5);
    if (plVar9 == (long *)0x0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_03d04168(*(undefined8 *)Method_System_WeakReference<Camera>_TryGetTarget__,0);
      iVar18 = 3;
      iVar19 = 3;
    }
    else {
      lVar10 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_035d1870;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_01c72498(plVar9,*(long *)puVar3,0);
LAB_035d1870:
      (*(code *)*puVar11)(plVar9,puVar11[1]);
      iVar18 = 7;
      iVar19 = 7;
    }
    if (plVar8 == (long *)0x0) goto LAB_035d18e0;
  }
  iVar19 = iVar18;
  lVar10 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_035d18d4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar11 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar3,0);
LAB_035d18d4:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_035d18e0:
  puVar3 = Method_System_WeakReference<Camera>__ctor__;
  if ((iVar19 != 0) && (iVar19 != 7)) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar3,0);
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03ce62b4(uVar12,*(undefined8 *)PTR_DAT_04237300,0);
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  puVar1 = Method_System_WeakReference<RegexReplacement>__ctor__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar1,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar12 = FUN_021fcd74(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_042327d0,
                        *(undefined8 *)PTR_DAT_04237308);
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  puVar3 = Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__;
  puVar1 = PTR_DAT_0422f958;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar3,0);
  lVar16 = *(long *)puVar1;
  lVar10 = *(long *)(lVar16 + 0x38);
  if (lVar10 == 0) {
    FUN_01c723f0(lVar16);
    lVar10 = *(long *)(lVar16 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01c72394();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar10 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01c72394();
  }
  uVar17 = **(undefined8 **)(lVar10 + 0xb8);
  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04237310);
  FUN_03ce8eb4(uVar12,*(undefined8 *)Method_System_WeakReference<SslStream>__ctor__,uVar17,0);
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  puVar1 = Method_System_WeakReference<RegexReplacement>_SetTarget__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03d03d14(*(undefined8 *)puVar1,0);
  lVar10 = *(long *)(param_1 + 0x20);
  plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar4,1);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar16 = *(long *)(param_1 + 0x18);
  if ((lVar16 != 0) &&
     (lVar13 = thunk_FUN_01c495e4(lVar16,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
    uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar12,0);
  }
  if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar8[4] = lVar16;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  thunk_FUN_03ce9154(lVar10,*(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__,plVar8,0)
  ;
  puVar2 = Method_UnityEngine_Rendering_VolumeParameter<TextureCurve>__ctor__;
  puVar1 = Method_UnityEngine_Rendering_VolumeParameter<Texture>_GetHashCode__;
  uVar12 = FUN_01c5d2fc(*(undefined8 *)puVar4,1);
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  uVar12 = FUN_01c5d2fc(*(undefined8 *)puVar1,0x100);
  *(undefined8 *)(param_1 + 0x58) = uVar12;
  plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar2,0x100);
  *(long **)(param_1 + 0x60) = plVar8;
  puVar1 = PTR_DAT_0422fd80;
  if (plVar8 != (long *)0x0) {
    uVar20 = 0;
    do {
      if (uVar20 == *(uint *)(plVar8 + 3)) {
        *(undefined1 *)(param_1 + 0x2a) = 1;
        return;
      }
      plVar9 = (long *)FUN_01c5d2fc(*(undefined8 *)puVar4,1);
      local_74[0] = uVar20;
      lVar10 = thunk_FUN_01c49334(*(undefined8 *)puVar1,local_74);
      if (plVar9 == (long *)0x0) break;
      if ((lVar10 != 0) &&
         (lVar16 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0)) {
LAB_035d1bc4:
        uVar12 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar12,0);
      }
      if ((int)plVar9[3] == 0) {
LAB_035d1bc0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar9[4] = lVar10;
      lVar10 = thunk_FUN_01c495e4(plVar9,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar10 == 0) goto LAB_035d1bc4;
      if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_035d1bc0;
      plVar8[(long)(int)uVar20 + 4] = (long)plVar9;
      plVar8 = *(long **)(param_1 + 0x60);
      uVar20 = uVar20 + 1;
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


