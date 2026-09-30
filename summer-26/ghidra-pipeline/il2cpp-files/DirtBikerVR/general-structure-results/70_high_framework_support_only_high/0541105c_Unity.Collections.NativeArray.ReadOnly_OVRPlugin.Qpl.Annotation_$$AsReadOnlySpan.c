/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$AsReadOnlySpan
ENTRY_POINT: 0541105c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  long unaff_x20;
  void *__s;
  long lVar13;
  ulong __n;
  void *__src;
  long *plVar14;
  long lVar15;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  bVar2 = *(byte *)(unaff_x20 + 0x18d);
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  *(long *)(unaff_x29 + -0x10) = param_2;
  if ((bVar2 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488568);
    FUN_03a8a718(PTR_DAT_08494b88);
    *(undefined1 *)(unaff_x20 + 0x18d) = 1;
  }
  lVar15 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar15 + 0x38) + 0xfc);
  lVar13 = (long)&stack0x00000000 -
           ((ulong)*(uint *)(*(long *)(lVar15 + 0x50) + 0xfc) + 0xf & 0x1fffffff0);
  lVar12 = lVar13 - ((ulong)*(uint *)(*(long *)(lVar15 + 0x60) + 0xfc) + 0xf & 0x1fffffff0);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (void *)(lVar12 - uVar10);
  __s = (void *)((long)__src - uVar10);
  pvVar4 = memset(__s,0,__n);
  iVar1 = *(int *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  if (iVar1 == 1) {
LAB_054111c8:
    plVar14 = *(long **)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x10) = 0xfffffffd;
    if (plVar14 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_054114f0;
    }
    lVar15 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08488568) {
          puVar5 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0541122c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)PTR_DAT_08488568,0);
LAB_0541122c:
    pvVar4 = (void *)(*(code *)*puVar5)(plVar14,puVar5[1]);
    if (((ulong)pvVar4 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      puVar5 = (undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x30);
      *puVar5 = 0;
      thunk_FUN_03afed3c(puVar5,0);
      pvVar4 = (void *)0x0;
    }
    else {
      plVar14 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x30);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        goto LAB_054114f0;
      }
      lVar15 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03ac4090(lVar15);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar15) {
            lVar15 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_054112e8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar15 = FUN_03ac43c4(plVar14,lVar15,0);
LAB_054112e8:
      lVar15 = *(long *)(lVar15 + 8);
      *(void **)(unaff_x29 + -0x40) = __src;
      (**(code **)(lVar15 + 0x10))
                (*(undefined8 *)(lVar15 + 8),lVar15,plVar14,unaff_x29 + -0x40,__src);
      memcpy(__s,__src,__n);
      puVar5 = *(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x40);
      uVar6 = *puVar5;
      pcVar9 = (code *)puVar5[2];
      *(long *)(unaff_x29 + -0x40) = lVar13;
      (*pcVar9)(uVar6,puVar5,__s,unaff_x29 + -0x40,lVar13);
      uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0)
                                  + 0x50),lVar13);
      puVar5 = *(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x58);
      uVar7 = *puVar5;
      pcVar9 = (code *)puVar5[2];
      *(long *)(unaff_x29 + -0x40) = lVar12;
      (*pcVar9)(uVar7,puVar5,__s,unaff_x29 + -0x40,lVar12);
      uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0)
                                  + 0x60),lVar12);
      puVar3 = PTR_DAT_08494b88;
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      FUN_04bd9c7c(unaff_x29 + -0x40,uVar6,uVar7,*(undefined8 *)puVar3);
      lVar12 = *(long *)(unaff_x29 + -0x10);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(lVar12 + 0x18) = uVar6;
      thunk_FUN_03afed3c(lVar12 + 0x18,0);
      pvVar4 = (void *)0x1;
      *(undefined4 *)(*(long *)(unaff_x29 + -0x10) + 0x10) = 1;
    }
  }
  else {
    pvVar4 = (void *)0x0;
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
      if (*(long *)(param_2 + 0x28) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(0);
        }
        goto LAB_054114f0;
      }
      plVar14 = *(long **)(*(long *)(param_2 + 0x28) + 0x10);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(0);
        }
        goto LAB_054114f0;
      }
      lVar15 = *(long *)(lVar15 + 0x18);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03ac4090(lVar15);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar15) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_054111a8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar14,lVar15,0);
LAB_054111a8:
      uVar6 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x30) = uVar6;
      pvVar4 = (void *)thunk_FUN_03afed3c();
      param_2 = *(long *)(unaff_x29 + -0x10);
      goto LAB_054111c8;
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_054114f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4);
}


