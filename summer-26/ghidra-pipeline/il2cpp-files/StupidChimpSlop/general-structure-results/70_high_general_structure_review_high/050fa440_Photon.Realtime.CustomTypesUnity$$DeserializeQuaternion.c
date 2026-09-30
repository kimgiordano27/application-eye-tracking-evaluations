/*
FUNCTION_NAME: Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 050fa440
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Photon_Realtime_CustomTypesUnity__DeserializeQuaternion(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long unaff_x26;
  
  plVar2 = (long *)FUN_050121a8();
  puVar1 = PTR_DAT_06648658;
  plVar3 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06648658,1);
  if (plVar3 == (long *)0x0) goto LAB_050fa75c;
  lVar10 = *(long *)(unaff_x21 + 0xc0);
  if ((lVar10 != 0) &&
     (lVar4 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_050fa764;
  if ((int)plVar3[3] == 0) goto LAB_050fa760;
  plVar3[4] = lVar10;
  thunk_FUN_02dc1ef0(plVar3 + 4,lVar10);
  if (plVar2 == (long *)0x0) goto LAB_050fa75c;
  lVar10 = (**(code **)(*plVar2 + 0x908))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x910));
  plVar2 = (long *)(unaff_x21 + 0xd8);
  *plVar2 = lVar10;
  thunk_FUN_02dc1ef0(plVar2,lVar10);
  uVar9 = *(undefined8 *)(unaff_x21 + 0xd0);
  uVar5 = FUN_050121a8(*(undefined8 *)PTR_DAT_0664b6e0,0);
  if (*(int *)(*(long *)PTR_DAT_0664abe0 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_0664abe0);
  }
  uVar6 = FUN_050e890c(uVar9,uVar5,0);
  if ((uVar6 & 1) == 0) {
    plVar3 = *(long **)(unaff_x21 + 0xd0);
    if (plVar3 == (long *)0x0) goto LAB_050fa75c;
    uVar5 = (**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
    uVar9 = *(undefined8 *)PTR_DAT_0665f080;
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)(unaff_x26 + 0xe0));
    }
    uVar9 = FUN_050121a8(uVar9,0);
    uVar6 = FUN_0501afe8(uVar5,uVar9,0);
    if ((uVar6 & 1) != 0) goto LAB_050fa574;
    lVar10 = *(long *)(unaff_x21 + 0xd0);
  }
  else {
LAB_050fa574:
    uVar5 = *(undefined8 *)PTR_DAT_0665fde0;
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    plVar3 = (long *)FUN_050121a8(uVar5,0);
    plVar7 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar1,1);
    if (plVar7 == (long *)0x0) goto LAB_050fa75c;
    lVar10 = *(long *)(unaff_x21 + 0xc0);
    if ((lVar10 != 0) &&
       (lVar4 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
    goto LAB_050fa764;
    if ((int)plVar7[3] == 0) goto LAB_050fa760;
    plVar7[4] = lVar10;
    thunk_FUN_02dc1ef0(plVar7 + 4,lVar10);
    if (plVar3 == (long *)0x0) goto LAB_050fa75c;
    lVar10 = (**(code **)(*plVar3 + 0x908))(plVar3,plVar7,*(undefined8 *)(*plVar3 + 0x910));
  }
  lVar4 = *plVar2;
  plVar2 = (long *)FUN_02d4dd2c(*(undefined8 *)puVar1,1);
  if (plVar2 != (long *)0x0) {
    if ((lVar10 != 0) &&
       (lVar8 = thunk_FUN_02d8a53c(lVar10,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0)) {
LAB_050fa764:
      uVar5 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_050fa760:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    plVar2[4] = lVar10;
    thunk_FUN_02dc1ef0(plVar2 + 4,lVar10);
    if (lVar4 != 0) {
      uVar5 = FUN_0501d188(lVar4,plVar2,0);
      if (*(int *)(*(long *)PTR_DAT_0664ac08 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_0664ac08);
      }
      plVar2 = (long *)FUN_05111b68(0);
      if (plVar2 != (long *)0x0) {
        lVar10 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 400));
        *unaff_x20 = lVar10;
        thunk_FUN_02dc1ef0();
        lVar4 = *unaff_x20;
        lVar10 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
        if (lVar10 != 0) {
          if ((unaff_x19 != 0) && (lVar8 = thunk_FUN_02d8a53c(), lVar8 == 0)) goto LAB_050fa764;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_050fa760;
          *(long *)(lVar10 + 0x20) = unaff_x19;
          thunk_FUN_02dc1ef0();
          if (lVar4 != 0) {
            lVar10 = (**(code **)(lVar4 + 0x18))
                               (*(undefined8 *)(lVar4 + 0x40),lVar10,*(undefined8 *)(lVar4 + 0x28));
            if (lVar10 != 0) {
              uVar5 = *(undefined8 *)PTR_DAT_066600b8;
              lVar4 = thunk_FUN_02d8a53c(lVar10,uVar5);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(lVar10,uVar5);
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_050fa75c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


