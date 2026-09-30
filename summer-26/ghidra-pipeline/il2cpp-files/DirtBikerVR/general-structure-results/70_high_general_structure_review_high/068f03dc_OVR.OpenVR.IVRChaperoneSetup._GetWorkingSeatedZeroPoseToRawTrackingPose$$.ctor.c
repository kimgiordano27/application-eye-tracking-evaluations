/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$.ctor
ENTRY_POINT: 068f03dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x068f06b0) */

void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose___ctor(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long *plVar14;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 auVar15 [16];
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b39f8);
  *(undefined1 *)(unaff_x23 + 0xa98) = 1;
  lVar6 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_04fdee9c(lVar6,*unaff_x19);
  plVar14 = (long *)(unaff_x21 + 0x98);
  *plVar14 = lVar6;
  thunk_FUN_03afed3c(plVar14,lVar6);
  FUN_0690a5f4();
  lVar6 = *plVar14;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if (unaff_x20 != (long *)0x0) {
      lVar6 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_084b3a08) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto FUN_068f04b0;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03ac43c4();
FUN_068f04b0:
      plVar8 = (long *)(*(code *)*puVar7)();
      puVar5 = PTR_DAT_084b3a18;
      puVar4 = PTR_DAT_084b3a10;
      puVar3 = PTR_DAT_08488568;
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_068f0534;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar3,0);
LAB_068f0534:
        uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 == 0) goto LAB_068f0664;
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_068f064c;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_068f0598;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar4,0);
LAB_068f0598:
        auVar15 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        lVar6 = *plVar14;
        if (lVar6 == 0) {
OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)puVar5;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0)
        goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          pauVar11 = (undefined1 (*) [16])(lVar10 + (long)(int)uVar2 * 0x10 + 0x20);
          *pauVar11 = auVar15;
          thunk_FUN_03afed3c(pauVar11,0);
        }
        else {
          FUN_04fdf748(lVar6,auVar15._0_8_,auVar15._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
LAB_068f064c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08488550) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_068f0680;
    }
  }
LAB_068f0664:
  puVar7 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_08488550,0);
LAB_068f0680:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


