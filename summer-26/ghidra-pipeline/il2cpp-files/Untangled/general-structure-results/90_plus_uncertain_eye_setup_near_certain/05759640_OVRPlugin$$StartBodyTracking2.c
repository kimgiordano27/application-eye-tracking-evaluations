/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 05759640
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


void OVRPlugin__StartBodyTracking2(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined8 uVar11;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x05759640:
  if (in_x9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar7 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05759680;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
  }
  puVar7 = (undefined8 *)FUN_02eea86c(unaff_x25,param_3,0);
LAB_05759680:
  (*(code *)*puVar7)(unaff_x25,unaff_x24,0,puVar7[1]);
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
      lVar4 = FUN_05b8e528(*(long *)(unaff_x19 + 0x40),plVar3,0);
      if (lVar4 == 0) {
        uVar5 = FUN_057596e4();
        lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d59708);
        FUN_05b6aad0(lVar4,plVar3,uVar5,0);
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (FUN_05b9011c(*(long *)(unaff_x19 + 0x40),lVar4,0), lVar4 == 0)) break;
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x38);
      uVar11 = *unaff_x29;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar11 = FUN_056109c0(uVar11,0);
      uVar6 = FUN_05619d34(uVar5,uVar11,0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(lVar4 + 0x38) == 0) break;
        uVar6 = FUN_0561b9b8(*(long *)(lVar4 + 0x38),0);
        if ((uVar6 & 1) != 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x38);
          uVar11 = *(undefined8 *)PTR_DAT_06d04070;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar11 = FUN_056109c0(uVar11,0);
          uVar6 = FUN_0561ab0c(uVar5,uVar11,0);
          if ((uVar6 & 1) != 0) goto code_r0x05759474;
        }
        lVar4 = (**(code **)(*unaff_x21 + 0x248))();
        if (lVar4 != 0) {
          if (unaff_x20 == 0) break;
          lVar4 = FUN_0569200c();
          if (lVar4 != 0) goto LAB_057595bc;
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
        uVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d596f0);
        FUN_05b51290(uVar5,0);
        while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
          FUN_057591a0();
          FUN_05698e6c();
        }
      }
LAB_057595bc:
      if (unaff_x22 == 0) break;
    } while( true );
  }
LAB_057596d8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
code_r0x05759474:
  iVar2 = (**(code **)(*unaff_x21 + 0x238))();
  if (iVar2 == 2) {
    FUN_05698e6c();
  }
  unaff_x25 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03d00);
  FUN_03fd0468(unaff_x25,*(undefined8 *)PTR_DAT_06d03ce8);
  while (iVar2 = (**(code **)(*unaff_x21 + 0x238))(), iVar2 != 0xe) {
    uVar5 = (**(code **)(*unaff_x21 + 0x248))();
    if (unaff_x25 == (long *)0x0) goto LAB_057596d8;
    lVar8 = unaff_x25[2];
    lVar9 = *unaff_x27;
    *(int *)((long)unaff_x25 + 0x1c) = *(int *)((long)unaff_x25 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_057596d8;
    uVar1 = *(uint *)(unaff_x25 + 3);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x25 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(unaff_x25,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    FUN_05698e6c();
  }
  plVar3 = *(long **)(lVar4 + 0x38);
  if ((plVar3 == (long *)0x0) ||
     (uVar5 = (**(code **)(*plVar3 + 0x428))(plVar3,*(undefined8 *)(*plVar3 + 0x430)),
     unaff_x25 == (long *)0x0)) goto LAB_057596d8;
  unaff_x24 = FUN_0562816c(uVar5,(int)unaff_x25[3],0);
  param_1 = *unaff_x25;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_06d03d68;
  goto code_r0x05759640;
}


