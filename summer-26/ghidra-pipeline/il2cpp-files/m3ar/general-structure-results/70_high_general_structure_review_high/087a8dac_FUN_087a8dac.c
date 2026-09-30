/*
FUNCTION_NAME: FUN_087a8dac
ENTRY_POINT: 087a8dac
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x087a908c) */
/* WARNING: Removing unreachable block (ram,0x087a9238) */

undefined4 FUN_087a8dac(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_0955bc9d & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8b1c0);
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08f6c7e0);
    FUN_0403162c(PTR_DAT_08f6c7e8);
    FUN_0403162c(PTR_DAT_08f65880);
    DAT_0955bc9d = 1;
  }
  if ((*(long *)(param_1 + 0x378) != 0) &&
     (plVar13 = *(long **)(*(long *)(param_1 + 0x378) + 0x28), plVar13 != (long *)0x0)) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f6c7e0) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_087a8e84;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f6c7e0,0);
LAB_087a8e84:
    plVar13 = (long *)(*(code *)*puVar8)(plVar13,puVar8[1]);
    puVar3 = PTR_DAT_08f6c7e8;
    puVar2 = PTR_DAT_08f65880;
    if (plVar13 != (long *)0x0) {
      bVar1 = false;
      do {
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto UnityEngine_Networking_DownloadHandlerFile__InternalCreateVFS;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar2,0);
UnityEngine_Networking_DownloadHandlerFile__InternalCreateVFS:
        uVar11 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        if ((uVar11 & 1) == 0) {
LAB_087a900c:
          if (plVar13 == (long *)0x0) goto LAB_087a9080;
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_087a9058;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_087a9040;
        }
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_087a8f68;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar3,0);
LAB_087a8f68:
        uVar4 = (*(code *)*puVar8)(plVar13,puVar8[1]);
        plVar9 = (long *)FUN_087a8250(param_1);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar4 = (**(code **)(*plVar9 + 0x1e8))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x1f0));
        lVar10 = FUN_087a8250(param_1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar11 = FUN_086c6034(lVar10,uVar4,0);
        if ((uVar11 & 1) == 0) goto LAB_087a900c;
        if ((param_2 & 1) == 0) {
          uVar11 = FUN_087a92d0(param_1,uVar4);
          if ((uVar11 & 1) != 0) {
            UnityEngine_Networking_UnityWebRequest__get_disposeUploadHandlerOnDispose
                      (param_1,uVar4,param_3 & 1);
            goto LAB_087a8ffc;
          }
        }
        else {
          uVar11 = FUN_087a92d0(param_1,uVar4);
          if ((uVar11 & 1) == 0) {
            FUN_087a92f4(param_1,uVar4,param_3 & 1);
LAB_087a8ffc:
            bVar1 = true;
          }
        }
      } while (plVar13 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_087a922c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_087a9040:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_087a9074;
    }
  }
LAB_087a9058:
  puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f65868,0);
LAB_087a9074:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_087a9080:
  if (bVar1) {
UnityEngine_Networking_UnityWebRequest__GetWebErrorString_Injected:
    uVar4 = 1;
  }
  else {
    if ((param_2 & 1) == 0) {
      plVar13 = (long *)FUN_087a8250(param_1);
      uVar4 = FUN_087a93e4(param_1);
      if (plVar13 == (long *)0x0) {
LAB_087a922c:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      uVar4 = (**(code **)(*plVar13 + 0x1f8))(plVar13,uVar4,*(undefined8 *)(*plVar13 + 0x200));
      plVar13 = (long *)FUN_087a8250(param_1);
      if (plVar13 == (long *)0x0) goto LAB_087a922c;
      iVar5 = (**(code **)(*plVar13 + 0x2c8))(plVar13,uVar4,*(undefined8 *)(*plVar13 + 0x2d0));
      if (iVar5 != -1) {
        FUN_087a941c(param_1,iVar5);
        FUN_087a9498(param_1,iVar5);
        goto UnityEngine_Networking_UnityWebRequest__GetWebErrorString_Injected;
      }
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
    }
    iVar6 = FUN_087a93e4(param_1);
    puVar2 = PTR_DAT_08f8b1c0;
    do {
      lVar10 = FUN_087a8250(param_1);
      if (lVar10 == 0) goto LAB_087a922c;
      iVar6 = iVar6 + iVar5;
      uVar11 = FUN_086c6034(lVar10,iVar6,0);
      if ((iVar6 < 0) || ((uVar11 & 1) != 0)) {
        if ((uVar11 & 1) != 0) {
          FUN_087a952c(param_1,iVar6);
          FUN_087a95b4(param_1,iVar6);
          goto UnityEngine_Networking_UnityWebRequest__GetWebErrorString_Injected;
        }
        break;
      }
      plVar13 = (long *)FUN_087a8250(param_1);
      if ((plVar13 == (long *)0x0) ||
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400))
         , plVar13 == (long *)0x0)) goto LAB_087a922c;
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_087a91c4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar2,1);
LAB_087a91c4:
      iVar7 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    } while (iVar6 < iVar7);
    uVar4 = 0;
  }
  return uVar4;
}


