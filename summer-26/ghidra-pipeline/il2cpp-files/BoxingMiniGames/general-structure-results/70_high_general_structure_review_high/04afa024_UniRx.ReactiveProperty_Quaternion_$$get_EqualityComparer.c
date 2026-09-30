/*
FUNCTION_NAME: UniRx.ReactiveProperty<Quaternion>$$get_EqualityComparer
ENTRY_POINT: 04afa024
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_ReactiveProperty<Quaternion>__get_EqualityComparer(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  long in_x9;
  void *unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  void *pvVar11;
  undefined8 uVar12;
  void *unaff_x24;
  void *__dest;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  float fVar13;
  
  pvVar11 = (void *)(param_1 - in_x9);
  __dest = (void *)((long)pvVar11 - in_x9);
  memcpy(pvVar11,unaff_x24,unaff_x20);
  if ((*(ushort *)(unaff_x26 + 0x135) & 1) == 0) {
    unaff_x26 = FUN_0367c9fc();
  }
  plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(unaff_x26 + 0xc0) + 8),pvVar11);
  puVar4 = PTR_DAT_079f4610;
  if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(PTR_DAT_079f4610 + 0x48))) {
UniRx_ReactiveProperty<Quaternion>__set_Value:
    memcpy(pvVar11,unaff_x24,unaff_x20);
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(puVar4 + 0x78))) {
LAB_04afa3fc:
      memcpy(pvVar11,unaff_x24,unaff_x20);
      lVar6 = FUN_031598c4(*(undefined8 *)(unaff_x21 + 0x20));
      uVar8 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
      memcpy(__dest,unaff_x22,unaff_x20);
      lVar6 = FUN_031598c4(*(undefined8 *)(unaff_x21 + 0x20));
      uVar12 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      uVar10 = thunk_FUN_036aa1c8(PTR_DAT_07a00ad8);
      uVar8 = FUN_05c98b2c(uVar10,uVar8,uVar12,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar12 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar12,uVar8,0);
      if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar12);
      }
      goto LAB_04afa4c8;
    }
    memcpy(pvVar11,unaff_x24,unaff_x20);
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(puVar4 + 0x78))) {
      pfVar7 = (float *)thunk_FUN_0367ff68();
      fVar13 = *pfVar7;
      memcpy(__dest,unaff_x22,unaff_x20);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(puVar4 + 0x78))) goto LAB_04afa3fc;
      memcpy(pvVar11,unaff_x22,unaff_x20);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
      if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(puVar4 + 0x78))) {
        pfVar7 = (float *)thunk_FUN_0367ff68();
        fVar13 = fmodf(fVar13,*pfVar7);
        uVar8 = *(undefined8 *)(puVar4 + 0x78);
        *(float *)(unaff_x29 + -0x1c) = fVar13;
        goto LAB_04afa1cc;
      }
    }
  }
  else {
    memcpy(pvVar11,unaff_x24,unaff_x20);
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(puVar4 + 0x48))) {
      piVar9 = (int *)thunk_FUN_0367ff68();
      iVar1 = *piVar9;
      memcpy(__dest,unaff_x22,unaff_x20);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(puVar4 + 0x48)))
      goto UniRx_ReactiveProperty<Quaternion>__set_Value;
      memcpy(pvVar11,unaff_x22,unaff_x20);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),pvVar11);
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(puVar4 + 0x48))) goto LAB_04afa3e8;
      piVar9 = (int *)thunk_FUN_0367ff68();
      iVar2 = *piVar9;
      uVar8 = *(undefined8 *)(puVar4 + 0x48);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      *(int *)(unaff_x29 + -0x1c) = iVar1 - iVar3 * iVar2;
LAB_04afa1cc:
      uVar8 = thunk_FUN_0367fa58(uVar8,unaff_x29 + -0x1c);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_05e26f18(uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_079f4920 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4920);
      }
      plVar5 = (long *)FUN_05d8cec8(uVar8,uVar12,0);
      lVar6 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      if (plVar5 != (long *)0x0) {
        if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar6 + 0x40)) {
          pvVar11 = (void *)thunk_FUN_0367ff68(plVar5);
          memcpy(unaff_x19,pvVar11,unaff_x20);
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
            return;
          }
        }
        else if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar5);
        }
        goto LAB_04afa4c8;
      }
    }
  }
LAB_04afa3e8:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_04afa4c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


