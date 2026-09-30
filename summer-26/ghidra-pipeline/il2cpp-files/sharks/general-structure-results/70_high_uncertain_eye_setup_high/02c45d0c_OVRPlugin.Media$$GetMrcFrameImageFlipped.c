/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameImageFlipped
ENTRY_POINT: 02c45d0c
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02c45d3c) */
/* WARNING: Removing unreachable block (ram,0x02c4614c) */

void OVRPlugin_Media__GetMrcFrameImageFlipped(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  int unaff_w21;
  int iVar11;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  FUN_02c317e4(param_1,param_2,0);
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_0184c01c();
  }
  puVar3 = PTR_DAT_0380c720;
  iVar1 = *(int *)(unaff_x20 + 0x18);
  if (0 < iVar1) {
    iVar11 = 0;
    do {
      plVar4 = (long *)FUN_02826610();
      if (plVar4 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if (((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
            (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) &&
           ((*(byte *)((long)plVar4 + 0x1a) >> 3 & 1) == 0)) {
          FUN_02826680();
          (**(code **)(*plVar4 + 0x178))(plVar4);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
    if (0 < iVar1) {
      iVar11 = 0;
      do {
        plVar4 = (long *)FUN_02826610();
        if (plVar4 != (long *)0x0) {
          FUN_02826680();
          lVar8 = *plVar4;
          plVar6 = plVar4;
          if (lVar8 != *unaff_x29) {
            plVar6 = (long *)0x0;
          }
          if (plVar6 == (long *)0x0) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_0380c728 + 0x130);
            if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_0380c728)) {
              lVar8 = *unaff_x26;
              plVar6 = (long *)thunk_FUN_01861ac0(plVar4,lVar8);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc944(plVar4,lVar8);
              }
              if (unaff_w21 == 0) {
                lVar8 = *plVar6;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *unaff_x26) {
                      puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_02c45f54;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0185dba8(plVar6,*unaff_x26,1);
LAB_02c45f54:
                uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                if ((uVar9 & 1) != 0) {
                  uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c700);
                  FUN_02c47c80(uVar5,plVar6);
                  FUN_02c3d66c(uVar5,0);
                  goto LAB_02c45ff0;
                }
              }
              lVar8 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *unaff_x26) {
                    puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_02c45fe0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_0185dba8(plVar6,*unaff_x26,0);
LAB_02c45fe0:
              (*(code *)*puVar7)(plVar6);
            }
            else {
              (**(code **)(lVar8 + 0x178))(plVar4);
            }
          }
          else {
            lVar8 = *unaff_x27;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
              lVar8 = *unaff_x27;
            }
            uVar5 = FUN_017fc368(lVar8);
            OVRPlugin_Ktx__TranscodeKtxTexture(plVar6,unaff_w21,uVar5);
          }
        }
LAB_02c45ff0:
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar1);
    }
  }
  if (DAT_03a26157 == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    DAT_03a26157 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_037f8768 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  return;
}


