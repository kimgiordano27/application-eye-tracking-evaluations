/*
FUNCTION_NAME: Sirenix.OdinInspector.ValueDropdownItem$$Sirenix.OdinInspector.IValueDropdownItem.GetText
ENTRY_POINT: 037d4f50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037d51b4) */

void Sirenix_OdinInspector_ValueDropdownItem__Sirenix_OdinInspector_IValueDropdownItem_GetText
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  
  plVar6 = (long *)(*(code *)*param_1)();
  puVar5 = StringLiteral_1222;
  puVar4 = StringLiteral_1221;
  puVar3 = Method_Gameplay_Creeps_CreepsSpawnerService_<>c_<Awake>b__7_3__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037d5000;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_037d5000:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_037d5150;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_037d505c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_037d505c:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_034128bc(lVar9,0);
    uVar10 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar3,0);
    if (((uVar10 & 1) != 0) ||
       (uVar10 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar5,0), (uVar10 & 1) != 0)) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4();
    }
    uVar10 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar4,0);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = thunk_FUN_0340e318(uVar8,*(undefined8 *)StringLiteral_1220,0), (uVar10 & 1) == 0))
    {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ee8df4();
    }
    FUN_02ee8df4();
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_037d516c;
    }
  }
LAB_037d5150:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_037d516c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


