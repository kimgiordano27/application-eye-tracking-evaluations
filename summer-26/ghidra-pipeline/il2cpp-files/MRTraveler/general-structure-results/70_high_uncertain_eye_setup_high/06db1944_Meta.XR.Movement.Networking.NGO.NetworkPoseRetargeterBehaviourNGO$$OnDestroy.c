/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NGO.NetworkPoseRetargeterBehaviourNGO$$OnDestroy
ENTRY_POINT: 06db1944
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_Movement_Networking_NGO_NetworkPoseRetargeterBehaviourNGO__OnDestroy
          (undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  int in_w9;
  uint uVar12;
  int in_w10;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar14;
  int unaff_w22;
  undefined8 *unaff_x24;
  long lVar15;
  int unaff_w25;
  float extraout_s0;
  float fVar16;
  float fVar17;
  float fVar18;
  
  param_2 = (in_w10 + in_w9) * unaff_w22 * param_2;
  uVar10 = FUN_03c8f97c(param_1,param_2);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar10;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38),uVar10);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  uVar5 = (**(code **)(*unaff_x20 + 0x2b8))();
  *(undefined4 *)(unaff_x19 + 0x44) = uVar5;
  *(undefined4 *)(unaff_x19 + 0x48) = uVar5;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar7 = *(int *)(unaff_x19 + 0x28);
    iVar6 = FUN_0859256c(*(long *)(unaff_x19 + 0x30),0);
    iVar9 = (int)((ulong)((long)unaff_w21 * (long)unaff_w25) >> 0x20);
    iVar6 = iVar7 * ((iVar9 >> 6) - (iVar9 >> 0x1f)) * iVar6;
    iVar7 = 0;
    if (param_2 != 0) {
      iVar7 = iVar6 / param_2;
    }
    *(int *)(unaff_x19 + 0x4c) = iVar6;
    *(int *)(unaff_x19 + 0x50) = iVar7;
    uVar10 = FUN_03c8f97c(*unaff_x24);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar10;
    thunk_FUN_03d233cc();
    puVar4 = PTR_DAT_08e68f00;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar11 = FUN_085decd4(uVar10,0,0);
    if ((uVar11 & 1) == 0) {
      if (unaff_x20 != (long *)0x0) goto LAB_06db1bc4;
    }
    else if (unaff_x20 != (long *)0x0) {
      uVar11 = (**(code **)(*unaff_x20 + 0x2c8))();
      if (((uVar11 & 1) != 0) && ((char)unaff_x20[8] != '\0')) {
        lVar15 = 0;
        fVar17 = extraout_s0;
        do {
          uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500(fVar17);
          }
          uVar11 = FUN_085decd4(uVar10,0,0);
          if ((uVar11 & 1) == 0) {
LAB_06db1bfc:
            *(undefined8 *)(unaff_x19 + 0x18) = 0;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),0);
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
          iVar7 = (**(code **)(*unaff_x20 + 0x2b8))();
          if (iVar7 < *(int *)(unaff_x19 + 0x48)) {
            *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
          }
          *(int *)(unaff_x19 + 0x48) = iVar7;
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06db1c1c;
          iVar9 = *(int *)(unaff_x19 + 0x40);
          iVar8 = FUN_08592530(*(long *)(unaff_x19 + 0x30),0);
          iVar2 = *(int *)(unaff_x19 + 0x44);
          iVar6 = *(int *)(unaff_x19 + 0x4c) + iVar2;
          if (iVar7 + iVar8 * iVar9 <= iVar6) goto LAB_06db1bfc;
          lVar14 = *(long *)(unaff_x19 + 0x30);
          if (lVar14 == 0) goto LAB_06db1c1c;
          uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
          iVar9 = FUN_08592530(lVar14,0);
          iVar7 = 0;
          if (iVar9 != 0) {
            iVar7 = iVar2 / iVar9;
          }
          FUN_085925e4(lVar14,uVar10,iVar2 - iVar7 * iVar9,0);
          lVar14 = *(long *)(unaff_x19 + 0x58);
          if (lVar14 == 0) goto LAB_06db1c1c;
          uVar3 = *(uint *)(lVar14 + 0x18);
          if ((long)((ulong)uVar3 << 0x20) < 1) {
            fVar17 = 0.0;
          }
          else {
            uVar12 = 0;
            uVar11 = 0;
            fVar16 = 0.0;
            do {
              if (uVar3 <= uVar11) {
LAB_06db1c18:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              fVar18 = *(float *)(lVar14 + 0x20 + uVar11 * 4);
              iVar7 = *(int *)(unaff_x19 + 0x50);
              iVar9 = 0;
              if (iVar7 != 0) {
                iVar9 = (int)uVar11 / iVar7;
              }
              fVar17 = fVar18 * fVar18;
              if (fVar18 * fVar18 <= fVar16) {
                fVar17 = fVar16;
              }
              if ((int)uVar11 == iVar9 * iVar7) {
                lVar13 = *(long *)(unaff_x19 + 0x38);
                if (lVar13 == 0) goto LAB_06db1c1c;
                if ((int)uVar12 < (int)*(uint *)(lVar13 + 0x18)) {
                  if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_06db1c18;
                  lVar1 = (long)(int)uVar12;
                  uVar12 = uVar12 + 1;
                  *(float *)(lVar13 + lVar1 * 4 + 0x20) = fVar18;
                }
              }
              uVar11 = uVar11 + 1;
              fVar16 = fVar17;
            } while ((long)uVar11 < (long)(int)uVar3);
          }
          lVar14 = unaff_x20[7];
          iVar7 = (int)unaff_x20[0xd] + 1;
          if (lVar14 != 0) {
            lVar15 = lVar14;
          }
          *(int *)(unaff_x20 + 0xd) = iVar7;
          if (lVar14 != 0) {
            if (lVar15 == 0) goto LAB_06db1c1c;
            fVar17 = (float)(**(code **)(lVar15 + 0x18))
                                      (*(undefined8 *)(lVar15 + 0x40),iVar7,
                                       *(undefined8 *)(unaff_x19 + 0x38),
                                       *(undefined8 *)(lVar15 + 0x28));
          }
          *(int *)(unaff_x19 + 0x44) = iVar6;
        } while( true );
      }
LAB_06db1bc4:
      if ((char)unaff_x20[8] != '\0') {
        (**(code **)(*unaff_x20 + 0x328))();
      }
      return 0;
    }
  }
LAB_06db1c1c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


