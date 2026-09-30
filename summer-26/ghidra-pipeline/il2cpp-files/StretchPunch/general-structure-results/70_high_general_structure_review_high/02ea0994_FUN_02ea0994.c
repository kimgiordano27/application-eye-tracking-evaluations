/*
FUNCTION_NAME: FUN_02ea0994
ENTRY_POINT: 02ea0994
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_02ea0994(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  iVar2 = FUN_02ea13f0();
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0)
  goto 
  System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
  ;
  uVar13 = *(uint *)(lVar5 + 0x18);
  iVar11 = 0;
  if (uVar13 != 0) {
    iVar11 = iVar2 / (int)uVar13;
  }
  uVar10 = iVar2 - iVar11 * uVar13;
  if (uVar10 < uVar13) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar13 = *(int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      if (lVar15 == 0)
      goto 
      System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
      ;
      uVar6 = *(undefined8 *)(lVar15 + 0x18);
      iVar11 = 0;
      do {
        uVar14 = (ulong)uVar13;
        if ((uint)uVar6 <= uVar13) goto LAB_02ea0c3c;
        if (*(int *)(lVar15 + uVar14 * 0x18 + 0x20) == iVar2) {
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0)
          goto 
          System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
          ;
          lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x20);
          lVar7 = lVar15 + uVar14 * 0x18;
          uVar6 = *(undefined8 *)(lVar7 + 0x28);
          uVar4 = *(undefined8 *)(lVar7 + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01dde7f8(lVar5);
          }
          lVar7 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_02ea0ab4;
              }
              uVar9 = uVar9 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar12,lVar5,0);
LAB_02ea0ab4:
          uVar9 = (*(code *)*puVar3)(plVar12,uVar6,uVar4,param_2,param_3,puVar3[1]);
          if ((uVar9 & 1) != 0) {
            uVar6 = 0;
            goto LAB_02ea0c14;
          }
          uVar6 = *(undefined8 *)(lVar15 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar11) {
          thunk_FUN_01dd295c(StringLiteral_1244);
          uVar6 = thunk_FUN_01de27b8();
          uVar4 = thunk_FUN_01dd295c(StringLiteral_3086);
          FUN_03393770(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar6,param_5);
        }
        if ((uint)uVar6 <= uVar13) goto LAB_02ea0c3c;
        uVar13 = *(uint *)(lVar15 + uVar14 * 0x18 + 0x24);
        iVar11 = iVar11 + 1;
      } while (-1 < (int)uVar13);
    }
    uVar13 = *(uint *)(param_1 + 0x28);
    if ((int)uVar13 < 0) {
      if (lVar15 == 0)
      goto 
      System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
      ;
      uVar13 = *(uint *)(param_1 + 0x24);
      if (uVar13 == *(uint *)(lVar15 + 0x18)) {
        FUN_02e9f194(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(param_1 + 0x10) == 0)
        goto 
        System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
        ;
        uVar13 = *(uint *)(param_1 + 0x24);
        lVar15 = *(long *)(param_1 + 0x18);
        iVar11 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
        *(uint *)(param_1 + 0x24) = uVar13 + 1;
        if (lVar15 == 0)
        goto 
        System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
        ;
        iVar1 = 0;
        if (iVar11 != 0) {
          iVar1 = iVar2 / iVar11;
        }
        uVar10 = iVar2 - iVar1 * iVar11;
      }
      else {
        *(uint *)(param_1 + 0x24) = uVar13 + 1;
      }
    }
    else {
      if (lVar15 == 0)
      goto 
      System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
      ;
      if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_02ea0c3c;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar15 + (ulong)uVar13 * 0x18 + 0x24);
    }
    if (uVar13 < *(uint *)(lVar15 + 0x18)) {
      lVar5 = lVar15 + (long)(int)uVar13 * 0x18;
      *(int *)(lVar5 + 0x20) = iVar2;
      *(undefined8 *)(lVar5 + 0x28) = param_2;
      *(undefined8 *)(lVar5 + 0x30) = param_3;
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {

        System_Array_InternalEnumerator<Dictionary_Entry<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>>__Dispose
        :
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((uVar10 < *(uint *)(lVar5 + 0x18)) && (uVar13 < *(uint *)(lVar15 + 0x18))) {
        piVar8 = (int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20);
        *(int *)(lVar15 + (long)(int)uVar13 * 0x18 + 0x24) = *piVar8 + -1;
        *piVar8 = uVar13 + 1;
        uVar6 = 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_02ea0c14:
        *param_4 = uVar13;
        return uVar6;
      }
    }
  }
LAB_02ea0c3c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


