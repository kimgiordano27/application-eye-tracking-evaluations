/*
FUNCTION_NAME: FUN_0602142c
ENTRY_POINT: 0602142c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

uint FUN_0602142c(undefined8 param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint local_68;
  uint uStack_64;
  
  puVar10 = PTR_DAT_075f2f78;
  if ((DAT_07a46b1e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f2f78);
    FUN_031f20f4(PTR_DAT_075f53a0);
    DAT_07a46b1e = 1;
  }
  iVar1 = *param_2;
  iVar4 = param_2[1];
  iVar2 = param_2[2];
  iVar5 = param_2[3];
  iVar8 = param_2[4];
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar16 = 0;
  local_68 = 0;
  uStack_64 = 0;
  do {
    iVar17 = *param_2;
    iVar6 = param_2[1];
    iVar3 = param_2[2];
    iVar7 = param_2[3];
    iVar9 = param_2[4];
    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    switch(uVar16) {
    case 1:
      iVar3 = iVar6;
      break;
    case 2:
      break;
    case 3:
      iVar17 = iVar7;
    case 0:
      iVar3 = iVar17;
      break;
    case 4:
      iVar3 = iVar9;
      break;
    default:
      goto switchD_06021520_default;
    }
    if (iVar3 != 0) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar13 = *param_3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075f53a0) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_060215a8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_0322c1e8(param_3,*(long *)PTR_DAT_075f53a0,0);
LAB_060215a8:
      uVar11 = (*(code *)*puVar12)(param_3,uVar16,puVar12[1]);
      iVar17 = *param_2;
      iVar6 = param_2[1];
      iVar3 = param_2[2];
      iVar7 = param_2[3];
      iVar9 = param_2[4];
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar10);
      }
      uStack_64 = uStack_64 | uVar11;
      switch(uVar16) {
      case 0:
        break;
      case 1:
        iVar17 = iVar6;
        break;
      case 2:
        iVar17 = iVar3;
        break;
      case 3:
        iVar17 = iVar7;
        break;
      case 4:
        iVar17 = iVar9;
        break;
      default:
        goto OVRPlugin__DiscoverSpaces;
      }
      if (iVar17 == 2) {
        lVar13 = *param_3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075f53a0) {
              puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_060216d0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar12 = (undefined8 *)FUN_0322c1e8(param_3,*(long *)PTR_DAT_075f53a0,1);
LAB_060216d0:
        uVar14 = (*(code *)*puVar12)(param_3,uVar16,0,puVar12[1]);
        if ((uVar14 & 1) != 0) {
          iVar17 = param_2[5];
          if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          local_68 = 1;
          if (iVar17 == 1) {
            return 1;
          }
        }
      }
      else {
OVRPlugin__DiscoverSpaces:
        iVar17 = *param_2;
        iVar6 = param_2[1];
        iVar3 = param_2[2];
        iVar7 = param_2[3];
        iVar9 = param_2[4];
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        switch(uVar16) {
        case 0:
          break;
        case 1:
          iVar17 = iVar6;
          break;
        case 2:
          iVar17 = iVar3;
          break;
        case 3:
          iVar17 = iVar7;
          break;
        case 4:
          iVar17 = iVar9;
          break;
        default:
          goto switchD_06021520_default;
        }
        if (iVar17 == 1) {
          lVar13 = *param_3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_075f53a0) {
                puVar12 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_06021788;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar12 = (undefined8 *)FUN_0322c1e8(param_3,*(long *)PTR_DAT_075f53a0,1);
LAB_06021788:
          uVar14 = (*(code *)*puVar12)(param_3,uVar16,0,puVar12[1]);
          if ((uVar14 & 1) != 0) {
            iVar17 = param_2[5];
            if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            local_68 = 1;
            if ((iVar8 != 2 && (((iVar1 != 2 && iVar4 != 2) && iVar2 != 2) && iVar5 != 2)) &&
                iVar17 == 1) {
              return 1;
            }
          }
        }
      }
    }
switchD_06021520_default:
    uVar16 = uVar16 + 1;
    if (uVar16 == 5) {
      return local_68 & (uStack_64 ^ 1);
    }
  } while( true );
}


