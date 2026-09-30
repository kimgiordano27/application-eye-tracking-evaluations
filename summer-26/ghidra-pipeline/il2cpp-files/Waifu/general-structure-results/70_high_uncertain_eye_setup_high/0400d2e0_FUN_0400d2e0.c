/*
FUNCTION_NAME: FUN_0400d2e0
ENTRY_POINT: 0400d2e0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0400d2e0(long param_1,undefined8 param_2,uint param_3,ulong param_4,void *param_5,
                 long param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  void *__src;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  ulong __n;
  undefined8 uVar17;
  undefined1 *__src_00;
  undefined1 *__src_01;
  undefined1 *__s;
  undefined1 auStack_d0 [4];
  uint local_cc;
  long local_c8;
  void *local_c0;
  undefined8 local_b8;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  ulong uStack_98;
  uint *local_90;
  undefined1 *puStack_88;
  long *local_80;
  undefined1 *puStack_78;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar16 = *(long **)(param_6 + 0x38);
  local_c0 = param_5;
  local_b8 = param_2;
  if (plVar16 == (long *)0x0) {
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    plVar16 = *(long **)(param_6 + 0x38);
    if (plVar16 == (long *)0x0) {
      FUN_0338f674(param_6);
      plVar16 = *(long **)(param_6 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*plVar16 + 0xfc);
  uVar15 = __n + 0xf & 0x1fffffff0;
  __src_01 = auStack_d0 + -uVar15;
  __src_00 = __src_01 + -uVar15;
  __s = __src_00 + -uVar15;
  memset(__s,0,__n);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  memset(__s,0,__n);
  if ((param_4 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x68) + (long)(int)local_b8 * 0x20;
    if ((*(byte *)(lVar12 + 4) >> 3 & 1) != 0) {
      uVar13 = (uint)*(ushort *)(lVar12 + 8);
      if (uVar13 == 0xffff) {
        uVar13 = 0xffffffff;
      }
      lVar12 = *(long *)(param_1 + 0x30);
      uVar14 = (uint)*(ushort *)(*(long *)(param_1 + 0x68) + (long)(int)uVar13 * 0x20 + 8);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      local_c8 = param_6;
      if (lVar12 == 0) goto LAB_0400d888;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_0400d88c;
      plVar8 = *(long **)(lVar12 + (ulong)uVar14 * 8 + 0x20);
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)&local_b0 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)&local_b0 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar16 = *(long **)(param_6 + 0x38);
      }
      uStack_a8 = (ulong)uVar13;
      uStack_98 = uStack_a8;
      lVar12 = plVar16[1];
      local_b0 = param_1;
      local_a0 = param_1;
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0338f618();
      }
      if (plVar8 == (long *)0x0) goto LAB_0400d888;
      lVar6 = *plVar8;
      if ((*(byte *)(lVar6 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12))
      {
        local_cc = uVar14;
        plVar16 = (long *)(**(code **)(lVar6 + 0x178))(plVar8,*(undefined8 *)(lVar6 + 0x180));
        uVar7 = *(undefined8 *)(*(long *)(local_c8 + 0x38) + 0x10);
        if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
          FUN_033b9870(DAT_083d23b8);
        }
        uVar7 = FUN_0683eca4(uVar7,0);
        if (plVar16 == (long *)0x0) goto LAB_0400d888;
        uVar15 = (**(code **)(*plVar16 + 0x2b8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x2c0));
        param_6 = local_c8;
        if ((uVar15 & 1) == 0) {
          uVar7 = FUN_033d1ba8(&DAT_083c7a10);
          uVar7 = FUN_033d1bb0(uVar7,5);
          param_6 = local_c8;
          uVar17 = *(undefined8 *)(*(long *)(local_c8 + 0x38) + 0x10);
          FUN_033d1ba8(&DAT_083d23b8);
          FUN_02e06fb0();
          plVar10 = (long *)FUN_0683eca4(uVar17,0);
          FUN_02e06434();
          uVar17 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          FUN_02e06434(uVar7);
          FUN_02e1298c(uVar7,uVar17);
          FUN_02e06560(uVar7,0,uVar17);
          FUN_02e06434(uVar7);
          FUN_02e1298c(uVar7,plVar8);
          FUN_02e06560(uVar7,1,plVar8);
          uVar17 = FUN_073de6e8(param_1,local_b8,0);
          FUN_02e06434(uVar7);
          FUN_02e1298c(uVar7,uVar17);
          FUN_02e06560(uVar7,2,uVar17);
          local_90 = (uint *)CONCAT44(local_90._4_4_,local_cc);
          uVar17 = FUN_033d1ba8(&DAT_083cda98);
          uVar17 = thunk_FUN_03398650(uVar17,&local_90);
          plVar8 = (long *)FUN_06877628(uVar17,0);
          FUN_02e06434();
          uVar17 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
          FUN_02e06434(uVar7);
          FUN_02e1298c(uVar7,uVar17);
          FUN_02e06560(uVar7,3,uVar17);
          uVar17 = FUN_073fc654(plVar16,0);
          FUN_02e06434(uVar7);
          FUN_02e1298c(uVar7,uVar17);
          FUN_02e06560(uVar7,4,uVar17);
          puVar9 = &DAT_08436588;
          goto LAB_0400d848;
        }
        uVar7 = (*(code *)**(undefined8 **)(*(long *)(local_c8 + 0x38) + 0x18))(__s);
        puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x28);
        uVar5 = (*(code *)*puVar11)(puVar11);
        (**(code **)(*plVar8 + 0x198))
                  (plVar8,&local_a0,uVar7,uVar5,*(undefined8 *)(*plVar8 + 0x1a0));
      }
      else {
        local_90 = (uint *)&local_a0;
        lVar12 = *(long *)(lVar6 + 0x1e0);
        puStack_88 = __src_01;
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar8,&local_90,__src_01);
        memcpy(__s,__src_01,__n);
        param_6 = local_c8;
      }
      plVar16 = (long *)0x0;
      goto LAB_0400d60c;
    }
  }
  if (param_3 != 0xffffffff) {
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 == 0) {
LAB_0400d888:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(lVar12 + 0x18) <= param_3) {
LAB_0400d88c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar6 = plVar16[7];
    plVar16 = *(long **)(lVar12 + (long)(int)param_3 * 8 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    if (plVar16 != (long *)0x0) {
      if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar16 + 0x130)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6))
      {
        __src = (void *)(*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x40))(plVar16);
        memcpy(__src_01,__src,__n);
        memcpy(__s,__src_01,__n);
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Qpl_Annotation>;
      }
    }
    uVar7 = FUN_033d1ba8(&DAT_083c7a10);
    uVar7 = FUN_033d1bb0(uVar7,5);
    uVar17 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10);
    FUN_033d1ba8(&DAT_083d23b8);
    FUN_02e06fb0();
    uVar17 = FUN_0683eca4(uVar17,0);
    uVar17 = FUN_073fc654(uVar17,0);
    FUN_02e06434(uVar7);
    FUN_02e1298c(uVar7,uVar17);
    FUN_02e06560(uVar7,0,uVar17);
    FUN_02e06434(plVar16);
    uVar17 = FUN_07406a08(plVar16,0);
    FUN_02e06434(uVar7);
    FUN_02e1298c(uVar7,uVar17);
    FUN_02e06560(uVar7,1,uVar17);
    uVar17 = FUN_073de6e8(param_1,local_b8,0);
    FUN_02e06434(uVar7);
    FUN_02e1298c(uVar7,uVar17);
    FUN_02e06560(uVar7,2,uVar17);
    FUN_02e06434(plVar16);
    plVar8 = (long *)FUN_06877628(plVar16,0);
    FUN_02e06434();
    uVar17 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    FUN_02e06434(uVar7);
    FUN_02e1298c(uVar7,uVar17);
    FUN_02e06560(uVar7,3,uVar17);
    FUN_02e06434(plVar16);
    uVar17 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    uVar17 = FUN_073fc654(uVar17,0);
    FUN_02e06434(uVar7);
    FUN_02e1298c(uVar7,uVar17);
    FUN_02e06560(uVar7,4,uVar17);
    puVar9 = &DAT_08436590;
LAB_0400d848:
    uVar17 = FUN_033d1ba8(puVar9);
    uVar7 = FUN_0666f1f0(uVar17,uVar7,0);
    FUN_033d1ba8(&DAT_083cdc60);
    uVar17 = thunk_FUN_03398a84();
    FUN_0682eb84(uVar17,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar17,param_6);
  }
  plVar16 = (long *)0x0;
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Qpl_Annotation>:
  uVar13 = (uint)local_b8;
LAB_0400d60c:
  memcpy(__src_01,__s,__n);
  puVar11 = *(undefined8 **)(*(long *)(param_6 + 0x38) + 0x50);
  local_90 = &local_6c;
  puStack_88 = __src_01;
  local_80 = plVar16;
  puStack_78 = __src_00;
  local_6c = uVar13;
  (*(code *)puVar11[2])(*puVar11,puVar11,param_1,&local_90,__src_00);
  memcpy(local_c0,__src_00,__n);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


