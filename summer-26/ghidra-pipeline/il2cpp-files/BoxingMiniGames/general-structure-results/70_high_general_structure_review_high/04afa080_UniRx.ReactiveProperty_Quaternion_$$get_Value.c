/*
FUNCTION_NAME: UniRx.ReactiveProperty<Quaternion>$$get_Value
ENTRY_POINT: 04afa080
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


void UniRx_ReactiveProperty<Quaternion>__get_Value(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  undefined8 uVar7;
  void *__src;
  int *piVar8;
  undefined8 uVar9;
  void *unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 uVar10;
  void *unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  
  if (*param_2 == param_1) {
    memcpy(unaff_x23,unaff_x24,unaff_x20);
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(unaff_x28 + 0x48))) {
      piVar8 = (int *)thunk_FUN_0367ff68();
      iVar1 = *piVar8;
      memcpy(unaff_x25,unaff_x22,unaff_x20);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(unaff_x28 + 0x48)))
      goto UniRx_ReactiveProperty<Quaternion>__set_Value;
      memcpy(unaff_x23,unaff_x22,unaff_x20);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(unaff_x28 + 0x48))) goto LAB_04afa3e8;
      piVar8 = (int *)thunk_FUN_0367ff68();
      iVar2 = *piVar8;
      uVar7 = *(undefined8 *)(unaff_x28 + 0x48);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      *(int *)(unaff_x29 + -0x1c) = iVar1 - iVar3 * iVar2;
LAB_04afa1cc:
      uVar7 = thunk_FUN_0367fa58(uVar7,unaff_x29 + -0x1c);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_05e26f18(uVar10,0);
      if (*(int *)(*(long *)PTR_DAT_079f4920 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4920);
      }
      plVar5 = (long *)FUN_05d8cec8(uVar7,uVar10,0);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      if (plVar5 != (long *)0x0) {
        if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar4 + 0x40)) {
          __src = (void *)thunk_FUN_0367ff68(plVar5);
          memcpy(unaff_x19,__src,unaff_x20);
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
  else {
UniRx_ReactiveProperty<Quaternion>__set_Value:
    memcpy(unaff_x23,unaff_x24,unaff_x20);
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
    if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(unaff_x28 + 0x78))) {
LAB_04afa3fc:
      memcpy(unaff_x23,unaff_x24,unaff_x20);
      lVar4 = FUN_031598c4(*(undefined8 *)(unaff_x21 + 0x20));
      uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      memcpy(unaff_x25,unaff_x22,unaff_x20);
      lVar4 = FUN_031598c4(*(undefined8 *)(unaff_x21 + 0x20));
      uVar10 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      uVar9 = thunk_FUN_036aa1c8(PTR_DAT_07a00ad8);
      uVar7 = FUN_05c98b2c(uVar9,uVar7,uVar10,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar10 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar10,uVar7,0);
      if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar10);
      }
      goto LAB_04afa4c8;
    }
    memcpy(unaff_x23,unaff_x24,unaff_x20);
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
    if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(unaff_x28 + 0x78))) {
      pfVar6 = (float *)thunk_FUN_0367ff68();
      fVar11 = *pfVar6;
      memcpy(unaff_x25,unaff_x22,unaff_x20);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)(unaff_x28 + 0x78))) goto LAB_04afa3fc;
      memcpy(unaff_x23,unaff_x22,unaff_x20);
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)(unaff_x28 + 0x78))) {
        pfVar6 = (float *)thunk_FUN_0367ff68();
        fVar11 = fmodf(fVar11,*pfVar6);
        uVar7 = *(undefined8 *)(unaff_x28 + 0x78);
        *(float *)(unaff_x29 + -0x1c) = fVar11;
        goto LAB_04afa1cc;
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


