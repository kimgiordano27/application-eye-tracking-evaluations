/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01ea9e94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01eaa150) */

ulong System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  uint uVar9;
  
  FUN_01ae9ed0();
  if (unaff_x19 == (long *)0x0) {
    uVar6 = thunk_FUN_01ad9084(StringLiteral_2203);
    FUN_032f7d84(uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050();
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    FUN_01ae9e74(lVar4);
  }
  plVar2 = (long *)thunk_FUN_01afa9e0();
  puVar1 = StringLiteral_2362;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_01afa9e0();
    if (plVar2 == (long *)0x0) {
      lVar4 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ae9e74(lVar4);
      }
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01eaa014;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01eaa014:
      plVar2 = (long *)(*(code *)*puVar3)();
      puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar9 = 0;
      do {
        lVar4 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_01eaa084;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)puVar1,0);
LAB_01eaa084:
        uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar2 == (long *)0x0) goto LAB_01eaa10c;
          lVar4 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_01eaa0e4;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_01eaa0cc;
        }
        if (uVar9 == 0x7fffffff) {
          FUN_01b48188();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050();
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
    lVar4 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)(*piVar8 + 1) * 0x10;
          goto LAB_01ea9fec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ae9e74(lVar5);
    }
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar4 = lVar4 + (long)*piVar8 * 0x10;
LAB_01ea9fec:
          puVar3 = (undefined8 *)(lVar4 + 0x138);
          goto LAB_01ea9ff0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar6 = 0;
  }
  puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,lVar5,uVar6);
LAB_01ea9ff0:
                    /* WARNING: Could not recover jumptable at 0x01eaa004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar7;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_01eaa0cc:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
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
  return (ulong)uVar9;
}


