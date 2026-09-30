/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking2
ENTRY_POINT: 057594a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking2(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar11;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x057594a4:
  plVar3 = (long *)thunk_FUN_02ef1808(*param_1);
  FUN_03fd0468(plVar3,*(undefined8 *)PTR_DAT_06d03ce8);
  while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
    uVar4 = (**(code **)(*unaff_x21 + 0x248))();
    if (plVar3 == (long *)0x0) goto LAB_057596d8;
    lVar7 = plVar3[2];
    lVar8 = *unaff_x27;
    *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_057596d8;
    uVar1 = *(uint *)(plVar3 + 3);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(plVar3 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(plVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    FUN_05698e6c();
  }
  plVar5 = *(long **)(unaff_x24 + 0x38);
  if ((plVar5 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x428))(plVar5,*(undefined8 *)(*plVar5 + 0x430)),
     plVar3 != (long *)0x0)) {
    uVar4 = FUN_0562816c(uVar4,(int)plVar3[3],0);
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06d03d68) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05759680;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d03d68,0);
LAB_05759680:
    (*(code *)*puVar6)(plVar3,uVar4,0,puVar6[1]);
    if (unaff_x22 != 0) {
      do {
        FUN_05b9a92c();
        FUN_05698e6c();
        iVar2 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar2 != 4) {
          FUN_05b9af18();
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            FUN_05b9d918();
            return;
          }
          break;
        }
        plVar3 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(plVar3);
        }
        FUN_05698e6c();
        if (*(long *)(unaff_x19 + 0x40) == 0) break;
        unaff_x24 = FUN_05b8e528(*(long *)(unaff_x19 + 0x40),plVar3,0);
        if (unaff_x24 == 0) {
          uVar4 = FUN_057596e4();
          unaff_x24 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59708);
          FUN_05b6aad0(unaff_x24,plVar3,uVar4,0);
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (FUN_05b9011c(*(long *)(unaff_x19 + 0x40),unaff_x24,0), unaff_x24 == 0)) break;
        }
        uVar4 = *(undefined8 *)(unaff_x24 + 0x38);
        uVar11 = *unaff_x29;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar11 = FUN_056109c0(uVar11,0);
        uVar9 = FUN_05619d34(uVar4,uVar11,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x24 + 0x38) == 0) break;
          uVar9 = FUN_0561b9b8(*(long *)(unaff_x24 + 0x38),0);
          if ((uVar9 & 1) != 0) {
            uVar4 = *(undefined8 *)(unaff_x24 + 0x38);
            uVar11 = *(undefined8 *)PTR_DAT_06d04070;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar11 = FUN_056109c0(uVar11,0);
            uVar9 = FUN_0561ab0c(uVar4,uVar11,0);
            if ((uVar9 & 1) != 0) goto code_r0x05759474;
          }
          lVar7 = (**(code **)(*unaff_x21 + 0x248))();
          if (lVar7 != 0) {
            if (unaff_x20 == 0) break;
            lVar7 = FUN_0569200c();
            if (lVar7 != 0) goto LAB_057595bc;
          }
          if (*(int *)(*(long *)PTR_DAT_06d4d140 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
        }
        else {
          iVar2 = (**(code **)(*unaff_x21 + 0x238))();
          if (iVar2 == 2) {
            FUN_05698e6c();
          }
          uVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d596f0);
          FUN_05b51290(uVar4,0);
          while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
            FUN_057591a0();
            FUN_05698e6c();
          }
        }
LAB_057595bc:
        if (unaff_x22 == 0) break;
      } while( true );
    }
  }
LAB_057596d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
code_r0x05759474:
  iVar2 = (**(code **)(*unaff_x21 + 0x238))();
  param_1 = (undefined8 *)PTR_DAT_06d03d00;
  if (iVar2 == 2) {
    FUN_05698e6c();
    param_1 = (undefined8 *)PTR_DAT_06d03d00;
  }
  goto code_r0x057594a4;
}


