/*
FUNCTION_NAME: System.Array$$LastIndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 02d61bd0
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__LastIndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  
  FUN_02d55890();
  lVar2 = thunk_FUN_015d0480(param_1,*(undefined8 *)(*unaff_x22 + 0x40));
  if (lVar2 == 0) {
LAB_02d61dbc:
    uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar6,0);
  }
  if (*(uint *)(unaff_x22 + 3) < 3) goto LAB_02d61db8;
  unaff_x22[6] = param_1;
  thunk_FUN_01656ef8(unaff_x22 + 6,param_1);
  lVar2 = thunk_FUN_015d056c(*unaff_x20);
  if (lVar2 == 0) goto LAB_02d61db4;
  FUN_02d55890();
  lVar3 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40));
  if (lVar3 == 0) goto LAB_02d61dbc;
  if (3 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[7] = lVar2;
    thunk_FUN_01656ef8(unaff_x22 + 7,lVar2);
    *unaff_x21 = (long)unaff_x22;
    thunk_FUN_01656ef8();
    lVar2 = *unaff_x21;
    if (lVar2 != 0) {
      uVar7 = (uint)*(undefined8 *)(lVar2 + 0x18);
      if (uVar7 < 3) goto LAB_02d61db8;
      if (*(long *)(lVar2 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x30) = 0x3f800000;
        if (uVar7 < 4) goto LAB_02d61db8;
        if (*(long *)(lVar2 + 0x38) != 0) {
          *(undefined4 *)(*(long *)(lVar2 + 0x38) + 0x30) = 0x3f800000;
          if (uVar7 == 0) goto LAB_02d61db8;
          lVar2 = *(long *)(lVar2 + 0x20);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x60);
          uVar4 = FUN_02d62218();
          if (lVar2 != 0) {
            FUN_02d55b60(lVar2,uVar6,uVar1,uVar8,uVar4);
            lVar2 = *unaff_x21;
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02d61db8;
              lVar2 = *(long *)(lVar2 + 0x28);
              uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
              uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
              uVar8 = *(undefined8 *)(unaff_x19 + 0x78);
              uVar4 = FUN_02d622c8();
              if (lVar2 != 0) {
                FUN_02d55b60(lVar2,uVar6,uVar1,uVar8,uVar4);
                lVar2 = *unaff_x21;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_02d61db8;
                  if (*(long *)(lVar2 + 0x30) != 0) {
                    FUN_02d55b60(*(long *)(lVar2 + 0x30),*(undefined8 *)(unaff_x19 + 0x20),
                                 *(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30)
                                 ,0);
                    lVar2 = *unaff_x21;
                    if (lVar2 != 0) {
                      if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_02d61db8;
                      if (*(long *)(lVar2 + 0x38) != 0) {
                        FUN_02d55b60(*(long *)(lVar2 + 0x38),*(undefined8 *)(unaff_x19 + 0x38),
                                     *(undefined8 *)(unaff_x19 + 0x40),
                                     *(undefined8 *)(unaff_x19 + 0x48),0);
                        uVar5 = FUN_04f195e4(0);
                        if ((uVar5 & 1) != 0) {
                          FUN_02d57974();
                          return;
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_02d61db4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_02d61db8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


