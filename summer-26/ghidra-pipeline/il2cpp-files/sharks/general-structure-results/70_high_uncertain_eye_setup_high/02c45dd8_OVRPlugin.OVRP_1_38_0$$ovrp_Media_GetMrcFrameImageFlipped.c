/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 02c45dd8
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int unaff_w21;
  int unaff_w22;
  int iVar9;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  
  do {
    (**(code **)(param_1 + 0x178))(param_2);
    do {
      do {
        unaff_w22 = unaff_w22 + 1;
        if (unaff_w28 == unaff_w22) {
          if (unaff_w28 < 1) goto LAB_02c45ffc;
          iVar9 = 0;
          goto LAB_02c45df8;
        }
        param_2 = (long *)FUN_02826610();
      } while (param_2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
    } while (((*(byte *)(*param_2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) ||
            ((*(byte *)((long)param_2 + 0x1a) >> 3 & 1) != 0));
    FUN_02826680();
    param_1 = *param_2;
  } while( true );
LAB_02c45df8:
  plVar2 = (long *)FUN_02826610();
  if (plVar2 != (long *)0x0) {
    FUN_02826680();
    lVar6 = *plVar2;
    plVar4 = plVar2;
    if (lVar6 != *unaff_x29) {
      plVar4 = (long *)0x0;
    }
    if (plVar4 == (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0380c728)) {
        lVar6 = *unaff_x26;
        plVar4 = (long *)thunk_FUN_01861ac0(plVar2,lVar6);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar2,lVar6);
        }
        if (unaff_w21 == 0) {
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_02c45f54;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*unaff_x26,1);
LAB_02c45f54:
          uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar7 & 1) != 0) {
            uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
            FUN_02c47c80(uVar3,plVar4);
            FUN_02c3d66c(uVar3,0);
            goto LAB_02c45ff0;
          }
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02c45fe0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0185dba8(plVar4,*unaff_x26,0);
LAB_02c45fe0:
        (*(code *)*puVar5)(plVar4);
      }
      else {
        (**(code **)(lVar6 + 0x178))(plVar2);
      }
    }
    else {
      lVar6 = *unaff_x27;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar6 = *unaff_x27;
      }
      uVar3 = FUN_017fc368(lVar6);
      OVRPlugin_Ktx__TranscodeKtxTexture(plVar4,unaff_w21,uVar3);
    }
  }
LAB_02c45ff0:
  iVar9 = iVar9 + 1;
  if (iVar9 == unaff_w28) {
LAB_02c45ffc:
    if (DAT_03a26157 == '\0') {
      FUN_017fc350(PTR_DAT_037f8768);
      DAT_03a26157 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    return;
  }
  goto LAB_02c45df8;
}


