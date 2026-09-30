/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 0604577c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  undefined8 local_6c [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_079f4e28;
  if ((DAT_07ee050b & 1) == 0) {
    FUN_03642964(PTR_DAT_07a21f90);
    FUN_03642964(PTR_DAT_07a208e0);
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07ee050b = 1;
  }
  lVar10 = *(long *)(param_4 + 200);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_071c24dc(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a21f90);
  FUN_06045bac();
  if (((lVar10 != 0) && (*(long *)(param_4 + 0x1a8) != 0)) &&
     (FUN_06045c10(*(long *)(param_4 + 0x1a8),*(undefined8 *)(param_4 + 0x1b0),
                   *(undefined8 *)(param_4 + 0x1b8),*(undefined8 *)(lVar10 + 0xd8),0,lVar5),
     lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x1c) == '\0') {
      if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_06045ad8;
      FUN_06045c10(*(long *)(param_4 + 0x1a8),*(undefined8 *)(param_4 + 0x1b0),
                   *(undefined8 *)(param_4 + 0x1b8),*(undefined8 *)(lVar10 + 0xd8),1,lVar5);
      if (*(char *)(lVar5 + 0x1c) == '\0') {
        return;
      }
    }
    if (*(long *)(param_4 + 0x1a8) != 0) {
      FUN_06045ce4(*(undefined4 *)(lVar5 + 0x28),*(long *)(param_4 + 0x1a8),
                   *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8));
      puVar1 = PTR_DAT_07a208e0;
      lVar10 = *(long *)(param_4 + 0x1a0);
      if (lVar10 != 0) {
        uVar4 = 0;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar4) {
            uVar4 = FUN_060456b0(param_4);
            if ((uVar4 & 1) == 0) {
              FUN_0604611c(param_4);
            }
            else {
              if (DAT_07ed76b5 == '\0') {
                FUN_03642964(PTR_DAT_079f4dc0);
                DAT_07ed76b5 = '\x01';
              }
              uVar17 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
              *(undefined8 *)(param_4 + 0x18c) = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8)
              ;
              *(undefined4 *)(param_4 + 0x194) = uVar17;
              if (*(long *)(param_4 + 0x150) == 0) break;
              FUN_071d05c8(*(long *)(param_4 + 0x150),0);
              FUN_071aee04(0);
              uVar16 = FUN_071af638(0);
              *(undefined4 *)(param_4 + 0x180) = uVar16;
              *(undefined4 *)(param_4 + 0x184) = uVar17;
              *(undefined4 *)(param_4 + 0x188) = param_3;
              *(undefined1 *)(param_4 + 0x1c8) = 1;
            }
            lVar10 = *(long *)(param_4 + 0x170);
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
              return;
            }
            break;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_06045ba8:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          if (*(long *)(param_4 + 200) == 0) break;
          param_3 = *(undefined4 *)(lVar5 + 0x18);
          lVar15 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
          FUN_06045d94(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),param_4,
                       uVar4 & 0xffffffff,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
          lVar10 = *(long *)(lVar5 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_06045ba8;
          if (*(char *)(lVar10 + uVar4 + 0x20) != '\0') {
            lVar10 = *(long *)(param_4 + 0x1a0);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_06045ba8;
            lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
            if (lVar10 == 0) break;
            if (*(char *)(lVar10 + 0x10) == '\0') {
              plVar11 = *(long **)(param_4 + 0x130);
              if (plVar11 == (long *)0x0) break;
              lVar7 = *plVar11;
              uVar12 = *(undefined8 *)(param_4 + 0x1c0);
              lVar10 = *(long *)puVar1;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_0604596c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30(plVar11,lVar10,0);
LAB_0604596c:
              iVar2 = (*(code *)*puVar6)(plVar11,puVar6[1]);
              plVar14 = *(long **)(param_4 + 0x120);
              if (plVar14 == (long *)0x0) break;
              lVar7 = *plVar14;
              lVar10 = *(long *)puVar1;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto FUN_060459d0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_0367cd30(plVar14,lVar10,0);
FUN_060459d0:
              iVar3 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              FUN_060f81f4(uVar12,plVar11,iVar2 != iVar3,0);
              if ((*(long *)(param_4 + 200) == 0) || (*(long *)(param_4 + 0x1a8) == 0)) break;
              param_3 = *(undefined4 *)(lVar5 + 0x18);
              uVar8 = FUN_06046024(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                                   *(long *)(param_4 + 0x1a8),uVar4 & 0xffffffff,
                                   *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1c0)
                                   ,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
              if ((uVar8 & 1) != 0) {
                if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x18), lVar10 == 0)) break;
                uVar8 = 0;
                while ((long)uVar8 < (long)(int)*(uint *)(lVar10 + 0x18)) {
                  if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_06045ba8;
                  if ((*(long *)(param_4 + 0x1a8) == 0) ||
                     (lVar7 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10), lVar7 == 0))
                  goto LAB_06045ad8;
                  lVar13 = *(long *)(param_4 + 0x1b0);
                  uVar17 = *(undefined4 *)(lVar10 + uVar8 * 4 + 0x20);
                  FUN_060f7948(local_6c,lVar7,uVar17,0);
                  if (lVar13 == 0) goto LAB_06045ad8;
                  local_90[0] = local_6c[0];
                  uStack_7c = uStack_58;
                  FUN_060f7988(lVar13,uVar17,local_90,0);
                  lVar10 = *(long *)(lVar15 + 0x18);
                  uVar8 = uVar8 + 1;
                  if (lVar10 == 0) goto LAB_06045ad8;
                }
                if (*(long *)(param_4 + 200) == 0) break;
                param_3 = *(undefined4 *)(lVar5 + 0x18);
                FUN_06045d94(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),param_4,
                             uVar4 & 0xffffffff,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
              }
            }
          }
          lVar10 = *(long *)(param_4 + 0x1a0);
          uVar4 = uVar4 + 1;
        } while (lVar10 != 0);
      }
    }
  }
LAB_06045ad8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


