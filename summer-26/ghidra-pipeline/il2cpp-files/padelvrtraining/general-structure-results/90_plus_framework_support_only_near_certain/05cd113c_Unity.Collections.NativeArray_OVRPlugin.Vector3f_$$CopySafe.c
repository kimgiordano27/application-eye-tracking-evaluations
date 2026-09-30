/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 05cd113c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd146c) */
/* WARNING: Removing unreachable block (ram,0x05cd1650) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int in_stack_00000008;
  char cStack000000000000000c;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xc08));
  FUN_03d2d2b0(PTR_DAT_091faf08);
  FUN_03d2d2b0(PTR_DAT_091af3f0);
  FUN_03d2d2b0(PTR_DAT_091af3f8);
  FUN_03d2d2b0(PTR_DAT_091fcc38);
  FUN_03d2d2b0(PTR_DAT_091fcc40);
  FUN_03d2d2b0(PTR_DAT_091fcc48);
  *(undefined1 *)(unaff_x22 + 0x4f6) = 1;
  cStack000000000000000c = '\0';
  in_stack_00000008 = 0;
  cVar1 = *(char *)(unaff_x19 + 0xb0);
  thunk_FUN_03d187c8();
  if (cVar1 == '\0') {
    if (*(char *)(unaff_x19 + 0x98) == '\0') {
      FUN_05cd1b4c();
      if ((unaff_x20 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x138), plVar8 != (long *)0x0)) {
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03d8f26c(lVar5);
        }
        lVar9 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_05cd132c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar8,lVar5,3);
LAB_05cd132c:
        (*(code *)*puVar3)(plVar8);
        return;
      }
      goto LAB_05cd164c;
    }
    if (*(char *)(unaff_x19 + 0x118) == '\0') {
      if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_05cd164c;
      plVar8 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
      uVar2 = FUN_06fc5244(*(undefined8 *)(unaff_x19 + 0xd0),*(undefined8 *)PTR_DAT_091fcc40,0);
      lVar9 = *(long *)PTR_DAT_091a0c08;
      lVar5 = *(long *)(lVar9 + 0x38);
      if (lVar5 == 0) {
        FUN_03d8f2c8(lVar9);
        lVar5 = *(long *)(lVar9 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 05cd1360 with catch @ 05cd1220
                       catch() { ... } // from try @ 05cd139c with catch @ 05cd1220
                       catch() { ... } // from try @ 05cd13d8 with catch @ 05cd1220
                       catch() { ... } // from try @ 05cd1404 with catch @ 05cd1220
                       catch() { ... } // from try @ 05cd1478 with catch @ 05cd1220 */
        lVar5 = FUN_03d8f26c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      if (plVar8 == (long *)0x0) goto LAB_05cd164c;
      lVar9 = *plVar8;
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05cd1354;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091faf08,1);
LAB_05cd1354:
      (*(code *)*puVar3)(plVar8,3,uVar2,uVar10,puVar3[1]);
      uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f0);
      FUN_071ddf10();
      lVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af3f8);
      FUN_071e8eb0(lVar5,uVar2,0);
      if (lVar5 == 0) goto LAB_05cd164c;
      FUN_071e91bc(lVar5,0);
      uVar2 = FUN_06fc5244(*(undefined8 *)PTR_DAT_091fcc48,*(undefined8 *)(unaff_x19 + 0xc0),0);
      FUN_076bc8dc(lVar5,uVar2,0);
      *(undefined1 *)(unaff_x19 + 0x118) = 1;
    }
    uVar6 = FUN_05cd1038();
    if ((uVar6 & 1) == 0) {
      if ((unaff_x20 == 0) || (plVar8 = *(long **)(unaff_x19 + 0x138), plVar8 == (long *)0x0))
      goto LAB_05cd164c;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c(lVar5);
      }
      lVar9 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_05cd1500;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar8,lVar5,3);
LAB_05cd1500:
      (*(code *)*puVar3)(plVar8);
      iVar4 = *(int *)(unaff_x19 + 0x144);
      if (iVar4 == *(int *)(unaff_x19 + 0x140)) {
        if (*(long *)(unaff_x19 + 0x90) == 0) {
LAB_05cd164c:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x18);
        uVar10 = *(undefined8 *)(unaff_x19 + 0xd0);
        in_stack_00000008 = iVar4 + 1;
        uVar2 = FUN_07175a38(&stack0x00000008,0);
        uVar2 = FUN_06fd2168(uVar10,*(undefined8 *)PTR_DAT_091fcc38,uVar2,0);
        lVar9 = *(long *)PTR_DAT_091a0c08;
        lVar5 = *(long *)(lVar9 + 0x38);
        if (lVar5 == 0) {
          FUN_03d8f2c8(lVar9);
          lVar5 = *(long *)(lVar9 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03d8f26c();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03d8f26c();
        }
        if (plVar8 == (long *)0x0) goto LAB_05cd164c;
        lVar9 = *plVar8;
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05cd161c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091faf08,1);
LAB_05cd161c:
        (*(code *)*puVar3)(plVar8,2,uVar2,uVar10,puVar3[1]);
        iVar4 = *(int *)(unaff_x19 + 0x144);
        *(int *)(unaff_x19 + 0x140) = iVar4 + 10;
      }
      *(int *)(unaff_x19 + 0x144) = iVar4 + 1;
    }
    else {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x120);
      cStack000000000000000c = '\0';
      FUN_071e78b0(uVar2,&stack0x0000000c,0);
      if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_060724dc();
      if (cStack000000000000000c != '\0') {
        thunk_FUN_03d180a8(uVar2,0);
      }
      if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_05cd164c;
      FUN_071e01f8(*(long *)(unaff_x19 + 0x128),0);
    }
  }
  return;
}


