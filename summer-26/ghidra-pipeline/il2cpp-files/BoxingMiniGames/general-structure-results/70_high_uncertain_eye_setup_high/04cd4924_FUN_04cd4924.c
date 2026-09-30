/*
FUNCTION_NAME: FUN_04cd4924
ENTRY_POINT: 04cd4924
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_04cd4924(undefined8 param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_70;
  long *plStack_68;
  undefined8 *local_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  uStack_50 = param_1;
  if ((DAT_07eda63e & 1) == 0) {
    FUN_03642964(PTR_DAT_079f49a0);
    FUN_03642964(PTR_DAT_079f49a8);
    DAT_07eda63e = 1;
  }
  plVar5 = *(long **)(*(long *)(param_2 + 0x20) + 0xc0);
  uVar9 = (ulong)*(uint *)(plVar5[2] + 0xfc);
  plStack_68 = &local_58;
  local_70 = 0;
  local_60 = &uStack_50;
  piVar2 = (int *)thunk_FUN_036a1ed0(param_1,*(undefined8 *)(*plVar5 + 0x80));
  if (*piVar2 == 0) {
    FUN_0315dc8c(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar3 = (undefined8 *)
             thunk_FUN_036a1ed0(uStack_50,
                                *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                0x60);
    plVar5 = (long *)*puVar3;
    if (plVar5 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *(long *)PTR_DAT_079f49a0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto System_ReadOnlySpan<OVRPlugin_RoomFace>__get_Length;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_079f49a0,0);
System_ReadOnlySpan<OVRPlugin_RoomFace>__get_Length:
    uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    FUN_03159758(uStack_50,*(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0xa0,
                 uVar4);
    FUN_0315dc8c(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar5 = (long *)PTR_DAT_079f49a8;
LAB_04cd4ad8:
    do {
      puVar3 = (undefined8 *)
               thunk_FUN_036a1ed0(uStack_50,
                                  *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                  0xa0);
      plVar10 = (long *)*puVar3;
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_04cd4dc8;
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *plVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
            goto FUN_04cd4b48;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar10,*plVar5,0);
FUN_04cd4b48:
      uVar7 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 8))(uStack_50);
        FUN_03159758(uStack_50,
                     *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0xa0,0);
        goto LAB_04cd4cc4;
      }
      puVar3 = (undefined8 *)
               thunk_FUN_036a1ed0(uStack_50,
                                  *(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) +
                                  0xa0);
      plVar10 = (long *)*puVar3;
      if (plVar10 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_04cd4dc8;
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *plVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar2 + 1) * 0x10 + 0x138);
            goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30(plVar10,*plVar5,1);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
      uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      lVar6 = *(long *)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar6 = thunk_FUN_0367fd24(uVar4,lVar6);
    } while (lVar6 == 0);
    lVar6 = *(long *)(*(long *)(*(long *)(local_58 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    uVar4 = FUN_03642af0(uVar4,lVar6,(long)&local_70 - (uVar9 + 0xf & 0x1fffffff0));
    FUN_03642988(uStack_50,*(long *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80) + 0x20,
                 uVar4,uVar9);
    uVar8 = 1;
    FUN_0315dc8c(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),1)
    ;
  }
  else {
    if (*piVar2 == 1) {
      FUN_0315dc8c(uStack_50,*(undefined8 *)(**(long **)(*(long *)(local_58 + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      plVar5 = (long *)PTR_DAT_079f49a8;
      goto LAB_04cd4ad8;
    }
LAB_04cd4cc4:
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
LAB_04cd4dc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


