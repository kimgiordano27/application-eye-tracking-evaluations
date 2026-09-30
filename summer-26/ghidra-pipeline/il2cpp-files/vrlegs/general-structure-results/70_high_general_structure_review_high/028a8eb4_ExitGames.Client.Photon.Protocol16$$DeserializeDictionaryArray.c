/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeDictionaryArray
ENTRY_POINT: 028a8eb4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeDictionaryArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  long *in_stack_00000008;
  
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_028a9318;
  FUN_01f49730(*(long *)(param_1 + 0x30),&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c90);
  plVar6 = in_stack_00000008;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(plVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_028a9318;
    uVar3 = FUN_036cb024(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_028a8f0c;
  }
  else {
LAB_028a8f0c:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036cee6c();
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if ((unaff_x22 == 0) || (lVar4 = FUN_036cbbbc(), lVar4 == 0)) goto LAB_028a9318;
      uVar3 = FUN_036cf5e4(lVar4,0);
      plVar6 = (long *)0x0;
      if ((uVar3 & 1) != 0) {
        FUN_01f49730();
        plVar6 = in_stack_00000008;
      }
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(plVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_028a9318;
    uVar3 = FUN_036cb024(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_028a8fac;
  }
  else {
LAB_028a8fac:
    lVar4 = FUN_036763fc(0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x24);
    }
    uVar3 = FUN_036cee6c(lVar4,0,0);
    plVar6 = (long *)0x0;
    if ((uVar3 & 1) != 0) {
      if ((lVar4 == 0) || (lVar5 = FUN_036cbbbc(lVar4,0), lVar5 == 0)) goto LAB_028a9318;
      uVar3 = FUN_036cf5e4(lVar5,0);
      plVar6 = (long *)0x0;
      if ((uVar3 & 1) != 0) {
        FUN_01f49730(lVar4,&stack0x00000008,*(undefined8 *)PTR_DAT_03d01c90);
        plVar6 = in_stack_00000008;
      }
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_036d35a8(plVar6,0,0);
  plVar9 = plVar6;
  if ((uVar3 & 1) == 0) {
    if (plVar6 == (long *)0x0) goto LAB_028a9318;
    uVar3 = FUN_036cb024(plVar6,0);
    if ((uVar3 & 1) == 0) goto LAB_028a905c;
  }
  else {
LAB_028a905c:
    puVar1 = PTR_DAT_03d01ca0;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_01fbff38(0,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_03d01c88;
    if (lVar4 == 0) goto LAB_028a9318;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar3 = 0;
      uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar3) goto LAB_028a931c;
        plVar9 = *(long **)(lVar4 + 0x20 + uVar3 * 8);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
        }
        else if (*plVar9 != *(long *)puVar1) {
          plVar9 = (long *)0x0;
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_036cee6c(plVar9,0,0);
        if ((uVar8 & 1) != 0) {
          if (plVar9 == (long *)0x0) goto LAB_028a9318;
          uVar8 = FUN_036cb024(plVar9,0);
          if ((uVar8 & 1) != 0) {
            lVar5 = FUN_036cbbbc(plVar9,0);
            if (lVar5 == 0) goto LAB_028a9318;
            uVar8 = FUN_036cf5e4(lVar5,0);
            if ((uVar8 & 1) != 0) break;
          }
        }
        uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar3 = uVar3 + 1;
        plVar9 = plVar6;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cbe438;
  uVar3 = FUN_036d35a8(plVar9,0,0);
  if ((uVar3 & 1) != 0) {
LAB_028a92d8:
    puVar2 = PTR_DAT_03d01cb0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_036772fc(*(undefined8 *)puVar2,0);
    return;
  }
  if (plVar9 != (long *)0x0) {
    uVar3 = FUN_036cb024(plVar9,0);
    if ((uVar3 & 1) == 0) goto LAB_028a92d8;
    plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    lVar4 = FUN_036cbbbc(plVar9,0);
    if ((lVar4 != 0) && (lVar4 = FUN_036d3824(lVar4,0), plVar6 != (long *)0x0)) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_028a931c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6[4] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6 + 4,lVar4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a90c(*(undefined8 *)PTR_DAT_03d01ca8,plVar6,0);
      *unaff_x20 = (long)plVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if ((*unaff_x20 != 0) && (lVar4 = FUN_036cbbbc(*unaff_x20,0), lVar4 != 0)) {
        lVar4 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03d01c98);
        plVar6 = (long *)(unaff_x19 + 0x80);
        *plVar6 = lVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar4);
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 0x28) = unaff_x19;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar5 = *(long *)PTR_DAT_03cbec30;
          lVar4 = *(long *)(lVar5 + 0x38);
          if (lVar4 == 0) {
            FUN_01a47054(lVar5);
            lVar4 = *(long *)(lVar5 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01a46ff8();
          }
          FUN_0367a90c(*(undefined8 *)PTR_DAT_03d01cb8,**(undefined8 **)(lVar4 + 0xb8),0);
          return;
        }
      }
    }
  }
LAB_028a9318:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


