/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 08a57d38
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08a5810c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_MRUtilityKit_MRUKNative__dlclose(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long *plVar12;
  long unaff_x21;
  long lVar13;
  int iVar14;
  long unaff_x26;
  undefined8 *puVar15;
  long in_stack_00000028;
  int *in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  int *in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  int *in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long *in_stack_000000c0;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  puVar3 = PTR_DAT_0ac16908;
  puVar15 = *(undefined8 **)(unaff_x26 + 0x968);
  lVar13 = 0;
  plVar12 = *(long **)(param_1 + 0x9b8);
  while( true ) {
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_08de0508(unaff_x19 + 10,0);
    if ((uVar5 & 1) != 0) break;
    while( true ) {
      if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_000000b8 = *(undefined8 *)(in_stack_000000e0 + 0x58);
      in_stack_000000b0._4_1_ = '\0';
      FUN_08de98fc(in_stack_000000b8,(long)&stack0x000000b0 + 4,0);
      if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar6 = *(long *)(in_stack_000000e0 + 0x58);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(int *)(lVar6 + 0x20) < 1) {
        iVar14 = 0xc;
      }
      else {
        lVar13 = FUN_0723bfc8(lVar6,*puVar15);
        iVar14 = 0xd;
      }
      if ((in_stack_000000e8._4_4_ < 0) && (in_stack_000000b0._4_1_ != '\0')) {
        thunk_FUN_0495413c(in_stack_000000b8,0);
      }
      if ((iVar14 != 0) && (iVar14 != 0xd)) break;
      if (lVar13 != 0) {
        FUN_08a571a0(lVar13,in_stack_000000c0);
      }
    }
    if (iVar14 != 0xc) goto LAB_08a57f78;
    if (in_stack_000000c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar5 = (**(code **)(*in_stack_000000c0 + 0x3d8))
                      (in_stack_000000c0,*(undefined8 *)(*in_stack_000000c0 + 0x3e0));
    if ((uVar5 & 1) != 0) {
      if ((unaff_x21 == 0) || (in_stack_000000c0 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar4 = (**(code **)(*in_stack_000000c0 + 0x368))();
      if (0 < (int)uVar4) {
        uVar5 = 0;
        do {
          if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          if (*(uint *)(unaff_x21 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
          lVar6 = *(long *)(in_stack_000000e0 + 0x70);
          if (lVar6 == 0) {
LAB_08a58114:
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          lVar9 = *(long *)(lVar6 + 0x10);
          uVar1 = *(undefined1 *)(unaff_x21 + 0x20 + uVar5);
          lVar10 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_08a58114;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(undefined1 *)(lVar9 + (int)uVar2 + 0x20) = uVar1;
          }
          else {
            FUN_06a5b844(lVar6,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08a57300();
    }
    FUN_08deb8e8(10,0);
    plVar12 = (long *)PTR_DAT_0ac0a9b8;
  }
  iVar14 = 0x11;
LAB_08a57f78:
  puVar3 = PTR_DAT_0ac111a0;
  if ((*in_stack_00000030 < 0) && (plVar12 = (long *)*in_stack_00000038, plVar12 != (long *)0x0)) {
    lVar13 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_08a57fec;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09b90,0);
FUN_08a57fec:
    (*(code *)*puVar15)(plVar12,puVar15[1]);
  }
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if ((iVar14 == 0x11) || (iVar14 == 0)) {
    iVar14 = 0x12;
  }
  if ((*in_stack_00000048 < 0) && (plVar12 = (long *)*in_stack_00000050, plVar12 != (long *)0x0)) {
    lVar13 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_MRUtilityKit_MRUKRoom__get_GlobalMeshAnchor;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar15 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac09b90,0);
Meta_XR_MRUtilityKit_MRUKRoom__get_GlobalMeshAnchor:
    (*(code *)*puVar15)(plVar12,puVar15[1]);
  }
  if (in_stack_00000040 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04948184();
  }
  if ((iVar14 == 0) || (iVar14 == 0x12)) {
    iVar14 = 0x16;
  }
  if (*in_stack_00000060 < 0) {
    lVar13 = *in_stack_00000068;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *(long *)(lVar13 + 0x90);
    *(undefined1 *)(lVar13 + 0x78) = 0;
    if (lVar6 == 0) {
      *in_stack_00000078 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x40);
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      *in_stack_00000070 = lVar6;
      (**(code **)(lVar6 + 0x18))(uVar7,*in_stack_00000080,uVar8);
    }
  }
  if (in_stack_00000058 == 0) {
    if ((iVar14 == 0) || (iVar14 == 0x16)) {
      lVar13 = *(long *)puVar3;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


