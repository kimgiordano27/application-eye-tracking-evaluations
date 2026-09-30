/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 01ea9f24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01eaa150) */

ulong System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  uint uVar8;
  long unaff_x22;
  long *plVar9;
  
  plVar9 = *(long **)(unaff_x22 + 0x440);
  plVar2 = (long *)thunk_FUN_01afa9e0();
  if (plVar2 == (long *)0x0) {
    lVar4 = **(long **)(unaff_x20 + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01eaa014;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01eaa014:
    plVar2 = (long *)(*(code *)*puVar3)();
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar8 = 0;
    do {
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01eaa084;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)puVar1,0);
LAB_01eaa084:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar2 == (long *)0x0) goto LAB_01eaa10c;
        lVar4 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_01eaa0e4;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_01eaa0cc;
      }
      if (uVar8 == 0x7fffffff) {
        FUN_01b48188();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050();
      }
      uVar8 = uVar8 + 1;
    } while( true );
  }
  lVar4 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *plVar9) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_01ea9ff0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*plVar9,1);
LAB_01ea9ff0:
                    /* WARNING: Could not recover jumptable at 0x01eaa004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar6;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_01eaa0cc:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01eaa100;
    }
  }
LAB_01eaa0e4:
  puVar3 = (undefined8 *)
           FUN_01ae9f78(plVar2,*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                        0);
LAB_01eaa100:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_01eaa10c:
  return (ulong)uVar8;
}


