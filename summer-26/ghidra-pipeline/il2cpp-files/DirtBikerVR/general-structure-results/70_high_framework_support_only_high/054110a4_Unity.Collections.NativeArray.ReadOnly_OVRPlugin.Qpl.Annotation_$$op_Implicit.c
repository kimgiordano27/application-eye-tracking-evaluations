/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 054110a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__op_Implicit(void)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  void *__s;
  long lVar13;
  size_t unaff_x22;
  void *__src;
  long unaff_x24;
  long *plVar14;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  lVar13 = (long)&stack0x00000000 - ((ulong)*(uint *)(in_x9 + 0xfc) + 0xf & 0x1fffffff0);
  lVar12 = lVar13 - ((ulong)*(uint *)(*(long *)(unaff_x25 + 0x60) + 0xfc) + 0xf & 0x1fffffff0);
  uVar10 = unaff_x22 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar12 - uVar10);
  __s = (void *)((long)__src - uVar10);
  pvVar3 = memset(__s,0,unaff_x22);
  iVar1 = *(int *)(unaff_x24 + 0x10);
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  if (iVar1 == 1) {
LAB_054111c8:
    plVar14 = *(long **)(unaff_x24 + 0x30);
    *(undefined4 *)(unaff_x24 + 0x10) = 0xfffffffd;
    if (plVar14 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      goto LAB_054114f0;
    }
    lVar7 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08488568) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0541122c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar14,*(long *)PTR_DAT_08488568,0);
LAB_0541122c:
    pvVar3 = (void *)(*(code *)*puVar4)(plVar14,puVar4[1]);
    if (((ulong)pvVar3 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      puVar4 = (undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x30);
      *puVar4 = 0;
      thunk_FUN_03afed3c(puVar4,0);
      pvVar3 = (void *)0x0;
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
      lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090(lVar7);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_054112e8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_03ac43c4(plVar14,lVar7,0);
LAB_054112e8:
      lVar7 = *(long *)(lVar7 + 8);
      *(void **)(unaff_x29 + -0x40) = __src;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar14,unaff_x29 + -0x40,__src);
      memcpy(__s,__src,unaff_x22);
      puVar4 = *(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x40);
      uVar5 = *puVar4;
      pcVar9 = (code *)puVar4[2];
      *(long *)(unaff_x29 + -0x40) = lVar13;
      (*pcVar9)(uVar5,puVar4,__s,unaff_x29 + -0x40,lVar13);
      uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0)
                                  + 0x50),lVar13);
      puVar4 = *(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x58);
      uVar6 = *puVar4;
      pcVar9 = (code *)puVar4[2];
      *(long *)(unaff_x29 + -0x40) = lVar12;
      (*pcVar9)(uVar6,puVar4,__s,unaff_x29 + -0x40,lVar12);
      uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0)
                                  + 0x60),lVar12);
      puVar2 = PTR_DAT_08494b88;
      *(undefined8 *)(unaff_x29 + -0x40) = 0;
      *(undefined8 *)(unaff_x29 + -0x38) = 0;
      FUN_04bd9c7c(unaff_x29 + -0x40,uVar5,uVar6,*(undefined8 *)puVar2);
      lVar12 = *(long *)(unaff_x29 + -0x10);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(lVar12 + 0x18) = uVar5;
      thunk_FUN_03afed3c(lVar12 + 0x18,0);
      pvVar3 = (void *)0x1;
      *(undefined4 *)(*(long *)(unaff_x29 + -0x10) + 0x10) = 1;
    }
  }
  else {
    pvVar3 = (void *)0x0;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_x24 + 0x10) = 0xffffffff;
      if (*(long *)(unaff_x24 + 0x28) == 0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(0);
        }
        goto LAB_054114f0;
      }
      plVar14 = *(long **)(*(long *)(unaff_x24 + 0x28) + 0x10);
      if (plVar14 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0(0);
        }
        goto LAB_054114f0;
      }
      lVar7 = *(long *)(unaff_x25 + 0x18);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090(lVar7);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_054111a8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar14,lVar7,0);
LAB_054111a8:
      uVar5 = (*(code *)*puVar4)(plVar14,puVar4[1]);
      *(undefined8 *)(*(long *)(unaff_x29 + -0x10) + 0x30) = uVar5;
      pvVar3 = (void *)thunk_FUN_03afed3c();
      unaff_x24 = *(long *)(unaff_x29 + -0x10);
      goto LAB_054111c8;
    }
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_054114f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar3);
}


