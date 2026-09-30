/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_GreaterThanOrEqual
ENTRY_POINT: 034ecac4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x034ecf04) */
/* WARNING: Removing unreachable block (ram,0x034ecefc) */
/* WARNING: Removing unreachable block (ram,0x034ece4c) */

void Unity_Mathematics_uint2x4__op_GreaterThanOrEqual(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  long unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  int iVar18;
  long unaff_x22;
  undefined1 auVar19 [16];
  undefined4 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  int iStack00000000000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  plVar14 = *(long **)(unaff_x21 + 0xed8);
  if ((*(byte *)(unaff_x22 + 0xcb6) & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d92de8);
    thunk_FUN_01ad9084(PTR_DAT_03d92e10);
    thunk_FUN_01ad9084(PTR_DAT_03d951d0);
    thunk_FUN_01ad9084(PTR_DAT_03d951d8);
    thunk_FUN_01ad9084(PTR_DAT_03d92df0);
    thunk_FUN_01ad9084(PTR_DAT_03d94ef8);
    thunk_FUN_01ad9084(PTR_DAT_03d951e0);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d94ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d91708);
    thunk_FUN_01ad9084(PTR_DAT_03d951c8);
    thunk_FUN_01ad9084(PTR_DAT_03d92490);
    *(undefined1 *)(unaff_x22 + 0xcb6) = 1;
  }
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000f8 = 0;
  _iStack00000000000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  _iStack0000000000000050 = 0;
  if (*(int *)(*plVar14 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_034e8838();
  if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    _in_stack_00000110 = FUN_034e87a8();
    lVar10 = FUN_02d98200(&stack0x00000110,0,*(undefined8 *)PTR_DAT_03d951c8);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar10 == 0) {
LAB_034ecef8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar15 = *(undefined8 *)(lVar10 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(uVar15,0,0);
    if ((uVar9 & 1) == 0) {
      if (param_2 == 0) goto LAB_034ecef8;
      uVar16 = *(undefined8 *)(param_2 + 0x78);
      plVar14 = (long *)FUN_03448874(0);
      FUN_034ea910(&stack0x00000120);
      in_stack_000000f8 = in_stack_00000128;
      _iStack00000000000000f0 = in_stack_00000120;
      uVar15 = _iStack00000000000000f0;
      in_stack_00000108 = in_stack_00000138;
      in_stack_00000100 = in_stack_00000130;
      iStack00000000000000f0 = (int)in_stack_00000120;
      bVar1 = 1 < iStack00000000000000f0;
      _iStack00000000000000f0 = uVar15;
      if (bVar1) {
        uVar8 = FUN_0299486c(&stack0x000000f0,uVar16,*(undefined8 *)PTR_DAT_03d951d0);
        FUN_02994b10(&stack0x000000f0,0,uVar8,*(undefined8 *)PTR_DAT_03d951d8);
      }
      _in_stack_000000e0 = FUN_034e8608(lVar10);
      puVar4 = PTR_DAT_03d92de8;
      puVar3 = PTR_DAT_03d92490;
      if (0 < in_stack_000000e0._12_4_) {
        iVar18 = 0;
        do {
          uVar15 = FUN_02d98200(&stack0x000000e0,iVar18,*(undefined8 *)puVar3);
          FUN_029940fc(&stack0x000000f0,uVar15,*(undefined8 *)puVar4);
          iVar18 = iVar18 + 1;
        } while (iVar18 < in_stack_000000e8._4_4_);
      }
      uVar7 = in_stack_00000108;
      uVar6 = in_stack_00000100;
      uVar5 = in_stack_000000f8;
      uVar15 = _iStack00000000000000f0;
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      auVar19 = FUN_03442d08(*(long *)(lVar10 + 0x20),0);
      in_stack_00000128 = uVar5;
      in_stack_00000120 = uVar15;
      in_stack_00000138 = uVar7;
      in_stack_00000130 = uVar6;
      uVar9 = FUN_01eec560(&stack0x00000120,auVar19._0_8_,auVar19._8_8_,&stack0x000000c8,
                           &stack0x00000070,uVar16,0,*(undefined8 *)PTR_DAT_03d951e0);
      if ((uVar9 & 1) != 0) {
        puVar17 = (undefined4 *)(lVar10 + 0xa0);
        in_stack_00000048 = *puVar17;
        uVar9 = FUN_034e787c(&stack0x00000048);
        if ((uVar9 & 1) != 0) {
          in_stack_00000048 = *puVar17;
          FUN_034ea308(&stack0x00000048);
        }
        FUN_0347a4b4(&stack0x00000120,&stack0x00000070,0);
        puVar3 = PTR_DAT_03d94ef8;
        in_stack_00000058 = in_stack_00000128;
        _iStack0000000000000050 = in_stack_00000120;
        uVar15 = _iStack0000000000000050;
        in_stack_00000068 = in_stack_00000138;
        in_stack_00000060 = in_stack_00000130;
        iStack0000000000000050 = (int)in_stack_00000120;
        bVar1 = 0 < iStack0000000000000050;
        _iStack0000000000000050 = uVar15;
        if (bVar1) {
          iVar18 = 0;
          do {
            uVar15 = FUN_0299389c(&stack0x00000050,iVar18,*(undefined8 *)puVar3);
            uVar8 = FUN_034ea578(uVar15,*puVar17,0);
            *puVar17 = uVar8;
            if ((uVar9 & 1) == 0) {
              uVar15 = FUN_034e6754(lVar10);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_0391f968(uVar15,0,0);
              if ((uVar11 & 1) != 0) {
                uVar15 = FUN_034e6754(lVar10);
                FUN_034eaa88(puVar17,uVar15);
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iStack0000000000000050);
        }
        in_stack_00000048 = *puVar17;
        FUN_034eaf10(&stack0x00000048);
        FUN_0347a75c(&stack0x00000070,0);
      }
      FUN_02994db0(&stack0x000000f0,*(undefined8 *)PTR_DAT_03d92e10);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_034ececc;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_01ae9f78(plVar14,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                               0);
LAB_034ececc:
        (*(code *)*puVar12)(plVar14,puVar12[1]);
      }
    }
  }
  return;
}


