/*
FUNCTION_NAME: FUN_05eb9e74
ENTRY_POINT: 05eb9e74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_5
*/


long FUN_05eb9e74(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar3 = PTR_DAT_06a149d0;
  puVar2 = PTR_DAT_06a149c8;
  if ((DAT_06dc3da8 & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<OVRPose>_get_Value__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>__ctor__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__);
    FUN_02d965b8(Method_System_Nullable<OVRTelemetryMarker>_get_HasValue__);
    FUN_02d965b8(Method_System_Nullable<ObjectCreationHandling>_GetValueOrDefault__);
    FUN_02d965b8(Method_System_Nullable<ObjectCreationHandling>_GetValueOrDefault__);
    FUN_02d965b8(Method_System_Nullable<ObjectCreationHandling>_get_HasValue__);
    FUN_02d965b8(PTR_DAT_06a149c0);
    FUN_02d965b8(PTR_DAT_06a149c8);
    FUN_02d965b8(PTR_DAT_06a149d0);
    DAT_06dc3da8 = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  lVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_0408d358(lVar4,*(undefined8 *)puVar2);
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_05eba1e8;
    uVar5 = FUN_05e5fbc0(*(long *)(param_1 + 0x60),0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_05eba1e8;
      uVar5 = FUN_06347764(*(long *)(param_1 + 0x58),0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (uVar7 = FUN_05e5e724(*(long *)(param_1 + 0x60),0), lVar4 != 0)) {
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar8 = *(long *)PTR_DAT_06a149c0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_05eba1e8;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_0408dbe4(lVar4,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_05eba144;
        }
        goto LAB_05eba1e8;
      }
    }
    if (lVar4 != 0) {
LAB_05eba144:
      FUN_0408ddf0(lVar4,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)Method_System_Nullable<ObjectCreationHandling>_get_HasValue__);
      return lVar4;
    }
    goto LAB_05eba1e8;
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_05eba1e8;
  uVar5 = FUN_05e5fbc0(*(long *)(param_1 + 0x60),0);
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar6 = FUN_05e5e6f4(*(long *)(param_1 + 0x60),0), lVar6 == 0)) goto LAB_05eba1e8;
    if (*(char *)(lVar6 + 0x19) != '\0') goto LAB_05eb9f7c;
  }
  else {
LAB_05eb9f7c:
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_05eba1e8;
    uVar5 = FUN_06347764(*(long *)(param_1 + 0x58),0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (uVar7 = FUN_05e5e724(*(long *)(param_1 + 0x60),0), lVar4 == 0)) goto LAB_05eba1e8;
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)PTR_DAT_06a149c0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05eba1e8;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      }
      else {
        FUN_0408dbe4(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04fdd304(&local_88,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_System_Nullable<OVRPose>_get_Value__);
    puVar3 = Method_System_Nullable<OVRTelemetryMarker>_GetValueOrDefault__;
    puVar2 = PTR_DAT_06a149c0;
    uStack_58 = puStack_80;
    local_60 = local_88;
    local_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
    local_88 = 0;
    puStack_80 = &local_60;
    while( true ) {
      do {
        uVar5 = FUN_05258f34(&local_60,*(undefined8 *)puVar3);
        if ((uVar5 & 1) == 0) {
          FUN_05259050(&local_60,*(undefined8 *)Method_System_Nullable<OVRTelemetryMarker>__ctor__);
          return lVar4;
        }
      } while ((char)local_48 == '\0');
      if (lVar4 == 0) break;
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) break;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = local_50;
      }
      else {
        FUN_0408dbe4(lVar4,local_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05eba1e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


