/*
FUNCTION_NAME: FUN_04af9f88
ENTRY_POINT: 04af9f88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_04af9f88(void *param_1,void *param_2,void *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  float *pfVar8;
  undefined8 uVar9;
  void *__src;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong __n;
  undefined1 *__dest;
  undefined8 uVar13;
  undefined1 *__dest_00;
  long lVar14;
  float __x;
  undefined1 auStack_80 [4];
  float local_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if ((DAT_07eda01d & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4920);
    DAT_07eda01d = 1;
  }
  lVar14 = *(long *)(param_4 + 0x20);
  lVar6 = lVar14;
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0367c9fc(lVar14);
    lVar6 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  __dest = auStack_80 + -uVar12;
  __dest_00 = __dest + -uVar12;
  memcpy(__dest,param_1,__n);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
  puVar5 = PTR_DAT_079f4610;
  if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)(PTR_DAT_079f4610 + 0x48))) {
UniRx_ReactiveProperty<Quaternion>__set_Value:
    memcpy(__dest,param_1,__n);
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
    if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)(puVar5 + 0x78))) {
LAB_04afa3fc:
      memcpy(__dest,param_1,__n);
      lVar6 = FUN_031598c4(*(undefined8 *)(param_4 + 0x20));
      uVar9 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      memcpy(__dest_00,param_2,__n);
      lVar6 = FUN_031598c4(*(undefined8 *)(param_4 + 0x20));
      uVar13 = thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest_00);
      uVar11 = thunk_FUN_036aa1c8(PTR_DAT_07a00ad8);
      uVar9 = FUN_05c98b2c(uVar11,uVar9,uVar13,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar13 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar13,uVar9,0);
      if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar13,param_4);
      }
      goto LAB_04afa4c8;
    }
    memcpy(__dest,param_1,__n);
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
    if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)(puVar5 + 0x78))) {
      pfVar8 = (float *)thunk_FUN_0367ff68();
      __x = *pfVar8;
      memcpy(__dest_00,param_2,__n);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest_00);
      if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)(puVar5 + 0x78))) goto LAB_04afa3fc;
      memcpy(__dest,param_2,__n);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)(puVar5 + 0x78))) {
        pfVar8 = (float *)thunk_FUN_0367ff68();
        local_7c = fmodf(__x,*pfVar8);
        uVar9 = *(undefined8 *)(puVar5 + 0x78);
        goto LAB_04afa1cc;
      }
    }
  }
  else {
    memcpy(__dest,param_1,__n);
    lVar6 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
    if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)(puVar5 + 0x48))) {
      piVar10 = (int *)thunk_FUN_0367ff68();
      iVar1 = *piVar10;
      memcpy(__dest_00,param_2,__n);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest_00);
      if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)(puVar5 + 0x48)))
      goto UniRx_ReactiveProperty<Quaternion>__set_Value;
      memcpy(__dest,param_2,__n);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      plVar7 = (long *)thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8),__dest);
      if ((plVar7 == (long *)0x0) || (*plVar7 != *(long *)(puVar5 + 0x48))) goto LAB_04afa3e8;
      piVar10 = (int *)thunk_FUN_0367ff68();
      iVar2 = *piVar10;
      uVar9 = *(undefined8 *)(puVar5 + 0x48);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      local_7c = (float)(iVar1 - iVar3 * iVar2);
LAB_04afa1cc:
      uVar9 = thunk_FUN_0367fa58(uVar9,&local_7c);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if (*(int *)(*(long *)(puVar5 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e26f18(uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_079f4920 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4920);
      }
      plVar7 = (long *)FUN_05d8cec8(uVar9,uVar13,0);
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      if (plVar7 != (long *)0x0) {
        if (*(long *)(*plVar7 + 0x40) == *(long *)(lVar6 + 0x40)) {
          __src = (void *)thunk_FUN_0367ff68(plVar7);
          memcpy(param_3,__src,__n);
          if (*(long *)(lVar4 + 0x28) == local_78) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar7);
        }
        goto LAB_04afa4c8;
      }
    }
  }
LAB_04afa3e8:
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_04afa4c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


