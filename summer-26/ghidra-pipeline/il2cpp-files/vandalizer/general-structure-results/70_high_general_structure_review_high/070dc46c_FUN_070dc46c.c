/*
FUNCTION_NAME: FUN_070dc46c
ENTRY_POINT: 070dc46c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_16;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x070dc818) */
/* WARNING: Removing unreachable block (ram,0x070dca18) */

void FUN_070dc46c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_07a5aa16 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075d86a0);
    FUN_031f20f4(Photon_Realtime_ServerConnection_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo);
    FUN_031f20f4(PTR_DAT_075dad00);
    FUN_031f20f4(PTR_DAT_075dad08);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_075d7700);
    FUN_031f20f4(ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
    DAT_07a5aa16 = 1;
  }
  if ((param_2 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0x78);
    if (plVar11 == (long *)0x0) goto LAB_070dca10;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo)
        {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_070dc568;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_0322c1e8(plVar11,*(long *)UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo,4);
LAB_070dc568:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  lVar8 = FUN_070d8e38(param_1);
  if (((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x478), plVar11 != (long *)0x0)) &&
     (plVar11 = (long *)(**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380)),
     plVar11 != (long *)0x0)) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Photon_Realtime_ServerConnection_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_070dc5f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_0322c1e8(plVar11,*(long *)Photon_Realtime_ServerConnection_TypeInfo,1);
LAB_070dc5f8:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar8 = FUN_070d8e38(param_1);
    if ((lVar8 != 0) && (plVar11 = (long *)FUN_0707cf54(lVar8,0), plVar11 != (long *)0x0)) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075dad00) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_070dc67c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075dad00,0);
LAB_070dc67c:
      puVar1 = PTR_DAT_0759b580;
      plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
      puVar4 = PTR_DAT_075dad08;
      puVar3 = PTR_DAT_075d86a0;
      puVar2 = PTR_DAT_0759e2a8;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      do {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_070dc6fc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar2,0);
LAB_070dc6fc:
        uVar9 = (*(code *)*puVar5)(plVar11,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_070dc80c;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_070dc7e4;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_070dc7cc;
        }
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_070dc758;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar4,0);
LAB_070dc758:
        plVar6 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        FUN_06fc7e40(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x770),0);
      } while( true );
    }
  }
  goto LAB_070dca10;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_070dc7cc:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_070dc800;
    }
  }
LAB_070dc7e4:
  puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)puVar1,0);
LAB_070dc800:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_070dc80c:
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar11 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x50),0);
    uVar7 = FUN_050a637c(1,*(undefined8 *)ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
    if (plVar11 == (long *)0x0) goto LAB_070dca10;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075d7700) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x9f) * 0x10 + 0x138);
          goto LAB_070dc8a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075d7700,0x9f);
LAB_070dc8a4:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar11 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x58),0);
    uVar7 = FUN_050a637c(1,*(undefined8 *)ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
    if (plVar11 == (long *)0x0) goto LAB_070dca10;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075d7700) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x9f) * 0x10 + 0x138);
          goto LAB_070dc93c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075d7700,0x9f);
LAB_070dc93c:
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  plVar11 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x60),0);
  uVar7 = FUN_050a637c(1,*(undefined8 *)ExitGames_Client_Photon_SerializeStreamMethod_TypeInfo);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_075d7700) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x9f) * 0x10 + 0x138);
          goto LAB_070dc9e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar11,*(long *)PTR_DAT_075d7700,0x9f);
LAB_070dc9e8:
                    /* WARNING: Could not recover jumptable at 0x070dca04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
    return;
  }
LAB_070dca10:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


