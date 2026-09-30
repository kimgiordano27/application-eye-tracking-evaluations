/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NGO.NetworkPoseRetargeterBehaviourNGO$$OnNetworkSpawn
ENTRY_POINT: 06db198c
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


undefined8 Meta_XR_Movement_Networking_NGO_NetworkPoseRetargeterBehaviourNGO__OnNetworkSpawn(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 in_w8;
  uint uVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long lVar13;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long lVar14;
  int unaff_w25;
  float extraout_s0;
  float fVar15;
  float fVar16;
  float fVar17;
  
  *(undefined4 *)(unaff_x23 + 0xc) = in_w8;
  *(undefined4 *)(unaff_x23 + 0x10) = in_w8;
  if (*(long *)(unaff_x23 + -8) != 0) {
    iVar6 = *(int *)(unaff_x19 + 0x28);
    iVar5 = FUN_0859256c(*(long *)(unaff_x23 + -8),0);
    iVar8 = (int)((ulong)((long)unaff_w21 * (long)unaff_w25) >> 0x20);
    iVar5 = iVar6 * ((iVar8 >> 6) - (iVar8 >> 0x1f)) * iVar5;
    iVar6 = 0;
    if (unaff_w22 != 0) {
      iVar6 = iVar5 / unaff_w22;
    }
    *(int *)(unaff_x19 + 0x4c) = iVar5;
    *(int *)(unaff_x19 + 0x50) = iVar6;
    uVar9 = FUN_03c8f97c(*unaff_x24);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar9;
    thunk_FUN_03d233cc();
    puVar4 = PTR_DAT_08e68f00;
    uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_085decd4(uVar9,0,0);
    if ((uVar10 & 1) == 0) {
      if (unaff_x20 != (long *)0x0) goto LAB_06db1bc4;
    }
    else if (unaff_x20 != (long *)0x0) {
      uVar10 = (**(code **)(*unaff_x20 + 0x2c8))();
      if (((uVar10 & 1) != 0) && ((char)unaff_x20[8] != '\0')) {
        lVar14 = 0;
        fVar16 = extraout_s0;
        do {
          uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_03cd7500(fVar16);
          }
          uVar10 = FUN_085decd4(uVar9,0,0);
          if ((uVar10 & 1) == 0) {
LAB_06db1bfc:
            *(undefined8 *)(unaff_x19 + 0x18) = 0;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x18),0);
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
          iVar6 = (**(code **)(*unaff_x20 + 0x2b8))();
          if (iVar6 < *(int *)(unaff_x19 + 0x48)) {
            *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
          }
          *(int *)(unaff_x19 + 0x48) = iVar6;
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06db1c1c;
          iVar8 = *(int *)(unaff_x19 + 0x40);
          iVar7 = FUN_08592530(*(long *)(unaff_x19 + 0x30),0);
          iVar2 = *(int *)(unaff_x19 + 0x44);
          iVar5 = *(int *)(unaff_x19 + 0x4c) + iVar2;
          if (iVar6 + iVar7 * iVar8 <= iVar5) goto LAB_06db1bfc;
          lVar13 = *(long *)(unaff_x19 + 0x30);
          if (lVar13 == 0) goto LAB_06db1c1c;
          uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
          iVar8 = FUN_08592530(lVar13,0);
          iVar6 = 0;
          if (iVar8 != 0) {
            iVar6 = iVar2 / iVar8;
          }
          FUN_085925e4(lVar13,uVar9,iVar2 - iVar6 * iVar8,0);
          lVar13 = *(long *)(unaff_x19 + 0x58);
          if (lVar13 == 0) goto LAB_06db1c1c;
          uVar3 = *(uint *)(lVar13 + 0x18);
          if ((long)((ulong)uVar3 << 0x20) < 1) {
            fVar16 = 0.0;
          }
          else {
            uVar11 = 0;
            uVar10 = 0;
            fVar15 = 0.0;
            do {
              if (uVar3 <= uVar10) {
LAB_06db1c18:
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb38();
              }
              fVar17 = *(float *)(lVar13 + 0x20 + uVar10 * 4);
              iVar6 = *(int *)(unaff_x19 + 0x50);
              iVar8 = 0;
              if (iVar6 != 0) {
                iVar8 = (int)uVar10 / iVar6;
              }
              fVar16 = fVar17 * fVar17;
              if (fVar17 * fVar17 <= fVar15) {
                fVar16 = fVar15;
              }
              if ((int)uVar10 == iVar8 * iVar6) {
                lVar12 = *(long *)(unaff_x19 + 0x38);
                if (lVar12 == 0) goto LAB_06db1c1c;
                if ((int)uVar11 < (int)*(uint *)(lVar12 + 0x18)) {
                  if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_06db1c18;
                  lVar1 = (long)(int)uVar11;
                  uVar11 = uVar11 + 1;
                  *(float *)(lVar12 + lVar1 * 4 + 0x20) = fVar17;
                }
              }
              uVar10 = uVar10 + 1;
              fVar15 = fVar16;
            } while ((long)uVar10 < (long)(int)uVar3);
          }
          lVar13 = unaff_x20[7];
          iVar6 = (int)unaff_x20[0xd] + 1;
          if (lVar13 != 0) {
            lVar14 = lVar13;
          }
          *(int *)(unaff_x20 + 0xd) = iVar6;
          if (lVar13 != 0) {
            if (lVar14 == 0) goto LAB_06db1c1c;
            fVar16 = (float)(**(code **)(lVar14 + 0x18))
                                      (*(undefined8 *)(lVar14 + 0x40),iVar6,
                                       *(undefined8 *)(unaff_x19 + 0x38),
                                       *(undefined8 *)(lVar14 + 0x28));
          }
          *(int *)(unaff_x19 + 0x44) = iVar5;
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


