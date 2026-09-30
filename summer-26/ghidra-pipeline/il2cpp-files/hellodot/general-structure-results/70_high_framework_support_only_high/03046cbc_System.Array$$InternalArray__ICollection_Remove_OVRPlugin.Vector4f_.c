/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4f>
ENTRY_POINT: 03046cbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4f>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_03046df4;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x1e) * 0x10 + 0x138);
LAB_03046df4:
  (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x19 + 0x28);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar8 = *(undefined4 *)(unaff_x19 + 0x70);
    uVar7 = *(undefined4 *)(unaff_x19 + 0x74);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x68);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x6c);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x20) * 0x10 + 0x138);
          goto 
          System_Array__InternalArray__ICollection_Remove<OVRSpatialAnchor_MultiAnchorDelegatePair>;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x21,0x20);
System_Array__InternalArray__ICollection_Remove<OVRSpatialAnchor_MultiAnchorDelegatePair>:
    (*(code *)*puVar1)(uVar10,uVar9,uVar8,uVar7,plVar5,puVar1[1]);
    if (*(char *)(unaff_x19 + 0x79) != '\0') {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x28);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar8 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar7 = *(undefined4 *)(unaff_x19 + 0x54);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x4c);
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x1e) * 0x10 + 0x138);
            goto LAB_03047074;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x21,0x1e);
LAB_03047074:
      (*(code *)*puVar1)(uVar9,uVar8,uVar7,plVar5,puVar1[1]);
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar8 = *(undefined4 *)(unaff_x19 + 0x70);
        uVar7 = *(undefined4 *)(unaff_x19 + 0x74);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x68);
        uVar9 = *(undefined4 *)(unaff_x19 + 0x6c);
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x21) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x20) * 0x10 + 0x138);
              goto LAB_030470ec;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*unaff_x21,0x20);
LAB_030470ec:
        (*(code *)*puVar1)(uVar10,uVar9,uVar8,uVar7,plVar5,puVar1[1]);
        plVar5 = *(long **)(unaff_x19 + 0x20);
        if (plVar5 != (long *)0x0) {
          lVar2 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          uVar6 = *(undefined8 *)PTR_DAT_065d7ef0;
          if (uVar3 != 0) {
            piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_065ca6b8) {
                puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
                goto LAB_03047174;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 != 0);
          }
          puVar1 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065ca6b8,7);
LAB_03047174:
          (*(code *)*puVar1)(0,plVar5,uVar6,0,puVar1[1]);
        }
        *(undefined1 *)(unaff_x19 + 0x79) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


