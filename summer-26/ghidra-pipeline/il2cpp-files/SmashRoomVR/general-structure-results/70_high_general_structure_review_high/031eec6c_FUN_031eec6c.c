/*
FUNCTION_NAME: FUN_031eec6c
ENTRY_POINT: 031eec6c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x031ef55c) */

void FUN_031eec6c(long param_1,long param_2,uint param_3,long param_4,long param_5,uint param_6,
                 int *param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  if ((DAT_03ff4366 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83048);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83050);
    thunk_FUN_01ad9084(PTR_DAT_03d83058);
    thunk_FUN_01ad9084(PTR_DAT_03d83060);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d83068);
    thunk_FUN_01ad9084(PTR_DAT_03d83070);
    thunk_FUN_01ad9084(PTR_DAT_03d83078);
    thunk_FUN_01ad9084(PTR_DAT_03d83080);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d82fd8);
    thunk_FUN_01ad9084(PTR_DAT_03d83088);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83090);
    thunk_FUN_01ad9084(PTR_DAT_03d83098);
    DAT_03ff4366 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_b8 = 0;
  if (param_1 == 0) goto LAB_031ef544;
  uVar8 = FUN_0391fbf0(param_1,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar22 = *(undefined8 *)PTR_DAT_03d83068;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar22 = FUN_0304eec0(uVar22,0);
  plVar9 = (long *)FUN_0391f408(param_1,uVar22,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (plVar9 == (long *)0x0) {
LAB_031eee20:
    plVar9 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d83070 + 0x130);
    if (*(byte *)(*plVar9 + 0x130) < bVar1) goto LAB_031eee20;
    if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d83070) {
      plVar9 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(plVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if ((plVar9 == (long *)0x0) || (lVar10 = FUN_0390110c(plVar9,0), lVar10 == 0))
    goto LAB_031ef544;
    if (*(long *)(lVar10 + 0x18) != 0) {
      if ((int)*(long *)(lVar10 + 0x18) == 0) {
LAB_031ef548:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 == 0) goto LAB_031ef544;
      if (*(long *)(lVar10 + 0x18) != 0) {
        if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_031ef548;
        if ((*(long *)(lVar10 + 0x20) == 0) ||
           (param_1 = FUN_0391c2b8(*(long *)(lVar10 + 0x20),0), param_1 == 0)) goto LAB_031ef544;
        param_3 = 0;
      }
    }
  }
  lVar10 = FUN_01ed7a88(param_1,*(undefined8 *)PTR_DAT_03d83050);
  lVar11 = FUN_01ed7a88(param_1,*(undefined8 *)PTR_DAT_03d83060);
  lVar12 = FUN_01ed7a88(param_1,*(undefined8 *)PTR_DAT_03d83058);
  if ((lVar12 != 0) && (uVar8 = *(ulong *)(lVar12 + 0x18), uVar8 != 0)) {
    if (param_2 == 0) {
      lVar13 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d83088,uVar8 & 0xffffffff);
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar7 = FUN_03041568(uVar8 & 0xffffffff,*(undefined4 *)(param_2 + 0x18),0);
      lVar13 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d83088,iVar7);
      uVar20 = *(uint *)(lVar12 + 0x18);
      uVar8 = (ulong)uVar20;
      if ((int)uVar20 < iVar7) {
        lVar18 = (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3) + 0x20;
        lVar23 = (long)iVar7 - (long)(int)uVar20;
        do {
          uVar20 = (uint)uVar8;
          if (*(uint *)(param_2 + 0x18) <= uVar20) goto LAB_031ef548;
          if (lVar13 == 0) goto LAB_031ef544;
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_031ef548;
          *(undefined8 *)(lVar13 + lVar18) = *(undefined8 *)(param_2 + lVar18);
          thunk_FUN_01b4f09c();
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
          uVar8 = (ulong)(uVar20 + 1);
        } while (lVar23 != 0);
      }
    }
    param_2 = lVar13;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar8 = 0;
      uVar17 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      puVar15 = (undefined8 *)(param_2 + 0x20);
      do {
        if (uVar17 <= uVar8) goto LAB_031ef548;
        if (param_2 == 0) goto LAB_031ef544;
        if (*(uint *)(param_2 + 0x18) <= uVar8) goto LAB_031ef548;
        *puVar15 = *(undefined8 *)(lVar12 + 0x20 + uVar8 * 8);
        thunk_FUN_01b4f09c();
        uVar17 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar8 = uVar8 + 1;
        puVar15 = puVar15 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  puVar4 = PTR_DAT_03d83078;
  if (lVar10 != 0) {
    uVar20 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar20) {
      uVar21 = 0;
      do {
        if (uVar20 <= uVar21) goto LAB_031ef548;
        lVar12 = *(long *)(lVar10 + (long)(int)uVar21 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_031ef544;
        lVar13 = FUN_03900d8c(lVar12,0);
        lVar18 = *(long *)puVar2;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar18);
        }
        uVar8 = FUN_03922f24(lVar13,0,0);
        if ((uVar8 & 1) == 0) {
          if ((param_6 & 1) != 0) {
            if (lVar13 == 0) goto LAB_031ef544;
            uVar8 = FUN_03901a94(lVar13,0);
            if ((uVar8 & 1) == 0) {
              lVar13 = FUN_0391c2b8(lVar12,0);
              if (lVar13 != 0) {
                uVar22 = FUN_039230bc(lVar13,0);
                uVar22 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d83090,uVar22,
                                      *(undefined8 *)PTR_DAT_03d83098,0);
                uVar14 = FUN_0391c2b8(lVar12,0);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)
                                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                    );
                }
                FUN_038f3474(uVar22,uVar14,0);
                *param_7 = *param_7 + 1;
                goto LAB_031ef1d8;
              }
              goto LAB_031ef544;
            }
          }
          local_a8 = 0;
          local_b0 = lVar12;
          thunk_FUN_01b4f09c(&local_b0,lVar12);
          local_a8 = param_2;
          thunk_FUN_01b4f09c(&local_a8,param_2);
          if (param_4 == 0) goto LAB_031ef544;
          lVar12 = *(long *)(param_4 + 0x10);
          lVar13 = *(long *)puVar4;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_031ef544;
          uVar20 = *(uint *)(param_4 + 0x18);
          if (uVar20 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
            *(uint *)(param_4 + 0x18) = uVar20 + 1;
            plVar9 = (long *)(lVar12 + 0x20);
            *plVar9 = local_b0;
            *(long *)(lVar12 + 0x28) = local_a8;
            thunk_FUN_01b4f09c(plVar9,0);
          }
          else {
            FUN_02c28930(param_4,local_b0,local_a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
LAB_031ef1d8:
        uVar20 = *(uint *)(lVar10 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (int)uVar20);
    }
    puVar4 = PTR_DAT_03d83080;
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar8 = 0;
        uVar17 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar17 <= uVar8) goto LAB_031ef548;
          local_c8 = *(undefined8 *)(lVar11 + 0x20 + uVar8 * 8);
          lStack_c0 = 0;
          local_b8 = 0;
          thunk_FUN_01b4f09c(&local_c8);
          lStack_c0 = param_2;
          thunk_FUN_01b4f09c(&lStack_c0,param_2);
          if (param_5 == 0) goto LAB_031ef544;
          lVar12 = *(long *)puVar4;
          lStack_98 = lStack_c0;
          local_a0 = local_c8;
          local_90 = local_b8;
          lVar10 = *(long *)(param_5 + 0x10);
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_031ef544;
          uVar20 = *(uint *)(param_5 + 0x18);
          if (uVar20 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(param_5 + 0x18) = uVar20 + 1;
            lVar10 = lVar10 + (long)(int)uVar20 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = local_b8;
            *(long *)(lVar10 + 0x28) = lStack_c0;
            *(undefined8 *)(lVar10 + 0x20) = local_c8;
            thunk_FUN_01b4f09c(lVar10 + 0x20,0);
          }
          else {
            lStack_78 = lStack_c0;
            local_80 = local_c8;
            local_70 = local_b8;
            FUN_02c2b2b8(param_5,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          uVar17 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      if ((param_3 & 1) == 0) {
        return;
      }
      lVar10 = FUN_0391fab4(param_1,0);
      if (lVar10 != 0) {
        plVar9 = (long *)FUN_0392a954(lVar10,0);
        puVar6 = PTR_DAT_03d83048;
        puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
        puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        do {
          lVar11 = *plVar9;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar10) {
                puVar15 = (undefined8 *)(lVar11 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_031ef384;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ae9f78(plVar9,lVar10,0);
LAB_031ef384:
          uVar8 = (*(code *)*puVar15)(plVar9,puVar15[1]);
          puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01afa9e0(plVar9,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                               );
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 == 0) goto LAB_031ef4f8;
            piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_031ef4e0;
          }
          lVar11 = *plVar9;
          lVar10 = *(long *)puVar4;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 != 0) {
            piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar10) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_031ef3e4;
              }
              uVar8 = uVar8 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar8 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ae9f78(plVar9,lVar10,1);
LAB_031ef3e4:
          plVar16 = (long *)(*(code *)*puVar15)(plVar9,puVar15[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c(plVar16);
          }
          uVar22 = FUN_01e8a9f8(plVar16,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_03922f24(uVar22,0,0);
          if ((uVar8 & 1) != 0) {
            uVar22 = FUN_0391c2b8(plVar16,0);
            if (*(int *)(*(long *)PTR_DAT_03d82fd8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_031eec6c(uVar22,param_2,1,param_4,param_5,param_6 & 1,param_7);
          }
        } while( true );
      }
    }
  }
LAB_031ef544:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar19 = piVar19 + 4;
    if (uVar8 == 0) break;
LAB_031ef4e0:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_031ef514;
    }
  }
LAB_031ef4f8:
  puVar15 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar3,0);
LAB_031ef514:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
  return;
}


