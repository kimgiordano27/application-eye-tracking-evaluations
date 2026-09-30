/*
FUNCTION_NAME: FUN_01491550
ENTRY_POINT: 01491550
PROGRAM: LethalApe-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_01491550(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_02bd8d90;
  if ((DAT_02dbaece & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bdbe30);
    thunk_FUN_009efa0c(PTR_DAT_02bd8d90);
    DAT_02dbaece = 1;
  }
  plVar5 = (long *)thunk_FUN_00a05c70(*(undefined8 *)puVar2);
  if (plVar5 != (long *)0x0) {
    FUN_01594e9c(plVar5,0);
    lVar6 = ExitGames_Client_Photon_Protocol16__DeserializeByteArray(param_3,0);
    puVar2 = PTR_DAT_02bdbe30;
    if (lVar6 != 0) {
      uVar13 = *(undefined8 *)(lVar6 + 0x40);
      FUN_01597290(plVar5,0x3c,0);
      iVar4 = 0;
      while( true ) {
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        lVar6 = **(long **)(lVar6 + 0xc0);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
        }
        lVar10 = *(long *)(param_4 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x132);
        lVar6 = lVar10;
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_0099e870(lVar10);
          uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x132);
          lVar6 = *(long *)(param_4 + 0x20);
        }
        pcVar14 = *(code **)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 8);
        if ((uVar1 & 1) == 0) {
          lVar6 = FUN_0099e870(lVar6);
        }
        iVar3 = (*pcVar14)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870(lVar6);
        }
        lVar6 = **(long **)(lVar6 + 0xc0);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
        }
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        if (iVar3 + -1 <= iVar4) break;
        local_58 = FUN_0148df94(param_1,iVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
        lVar6 = *(long *)(param_4 + 0x20);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          lVar6 = FUN_0099e870();
        }
        plVar7 = (long *)thunk_FUN_00a058b4(lVar6,&local_58);
        lVar10 = *plVar7;
        lVar6 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0149175c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_0099eb60(plVar7,lVar6,0);
LAB_0149175c:
        uVar9 = (*(code *)*puVar8)(plVar7,param_2,param_3,puVar8[1]);
        FUN_0159691c(plVar5,uVar9,0);
        FUN_0159691c(plVar5,uVar13,0);
        FUN_01597290(plVar5,0x20,0);
        iVar4 = iVar4 + 1;
      }
      lVar10 = *(long *)(param_4 + 0x20);
      pcVar14 = *(code **)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x18) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_0099e870();
      }
      iVar4 = (*pcVar14)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_0099e870(lVar6);
      }
      local_58 = FUN_0148df94(param_1,iVar4 + -1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      lVar6 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_0099e870();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_0099e870();
      }
      plVar7 = (long *)thunk_FUN_00a058b4(lVar6,&local_58);
      lVar10 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar6) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0149187c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0099eb60(plVar7,lVar6,0);
LAB_0149187c:
      uVar13 = (*(code *)*puVar8)(plVar7,param_2,param_3,puVar8[1]);
      FUN_0159691c(plVar5,uVar13,0);
      FUN_01597290(plVar5,0x3e,0);
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


