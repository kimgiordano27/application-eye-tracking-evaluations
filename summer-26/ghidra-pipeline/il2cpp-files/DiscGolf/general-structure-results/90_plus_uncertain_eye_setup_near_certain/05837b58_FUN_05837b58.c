/*
FUNCTION_NAME: FUN_05837b58
ENTRY_POINT: 05837b58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05837b58(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_38;
  
  puVar1 = OVRMixedReality_TypeInfo;
  if ((DAT_06dc0775 & 1) == 0) {
    FUN_02d965b8(OVRMeshRenderer_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_Formatters_Binary_ObjectProgress_TypeInfo);
    FUN_02d965b8(OVRMixedReality_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0f8a8);
    FUN_02d965b8(PTR_DAT_06a0f8c0);
    FUN_02d965b8(PTR_DAT_06a10570);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo);
    DAT_06dc0775 = 1;
  }
  local_38 = 0;
  plVar4 = (long *)thunk_FUN_02dd3048(param_3,*(undefined8 *)puVar1);
  if ((plVar4 != (long *)0x0) ||
     (plVar4 = (long *)FUN_035a206c(param_3,*(undefined8 *)OVRMeshRenderer_TypeInfo),
     plVar4 != (long *)0x0)) {
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)System_Runtime_Serialization_Formatters_Binary_ObjectProgress_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05837c6c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar4,*(long *)
                                  System_Runtime_Serialization_Formatters_Binary_ObjectProgress_TypeInfo
                          ,0);
LAB_05837c6c:
    iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo;
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        lVar10 = *plVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05837e1c with catch @ 05837e28
                        */
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_058380b8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_058380b8:
        uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
        FUN_05836e2c(param_1,param_2,uVar6);
        return;
      }
      if (iVar3 == 2) {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05837eb0;
            }
                    /* try { // try from 05837cb4 to 05937ceb has its CatchHandler @ 05837cb4
                       catch() { ... } // from try @ 05837cb4 with catch @ 05837cb4
                       catch() { ... } // from try @ 05837d18 with catch @ 05837cb4
                       catch() { ... } // from try @ 05837dc4 with catch @ 05837cb4
                       catch() { ... } // from try @ 05837e20 with catch @ 05837cb4 */
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05837eb0:
        uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05837f70;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05837f70:
        uVar7 = (*(code *)*puVar5)(plVar4,1,puVar5[1]);
        FUN_0583710c(param_1,param_2,uVar6,uVar7);
        return;
      }
    }
    else {
      if (iVar3 == 3) {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_058380f4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_058380f4:
        uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05838154;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05838154:
        uVar7 = (*(code *)*puVar5)(plVar4,1,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_058381b4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_058381b4:
        uVar8 = (*(code *)*puVar5)(plVar4,2,puVar5[1]);
        FUN_0583746c(param_1,param_2,uVar6,uVar7,uVar8);
        return;
      }
      if (iVar3 == 4) {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 05837cec to 05937d17 has its CatchHandler @ 05837d94 */
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05837f10;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
                    /* try { // try from 05837d18 to 05937dab has its CatchHandler @ 05837cb4 */
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05837f10:
        uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05837fb0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05837fb0:
        uVar7 = (*(code *)*puVar5)(plVar4,1,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05838010;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05838010:
        uVar8 = (*(code *)*puVar5)(plVar4,2,puVar5[1]);
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05838070;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_05838070:
        uVar9 = (*(code *)*puVar5)(plVar4,3,puVar5[1]);
        FUN_05837850(param_1,param_2,uVar6,uVar7,uVar8,uVar9);
        return;
      }
    }
    FUN_0588c430(param_1,*(undefined8 *)
                          Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin_TypeInfo,0);
    FUN_0588c430(param_2,*(undefined8 *)PTR_DAT_06a10570,0);
    uVar6 = *(undefined8 *)PTR_DAT_06a0f8a8;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_054f73b4(uVar6,0);
    if (param_1 != (long *)0x0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05837cec with catch @ 05837d94
                        */
      uVar11 = (**(code **)(*param_1 + 0x318))(param_1,uVar6,*(undefined8 *)(*param_1 + 800));
      if ((uVar11 & 1) != 0) {
        uVar6 = FUN_05838294(param_1);
                    /* try { // try from 05837dac to 05937dc3 has its CatchHandler @ 05837e18 */
        local_38 = FUN_035a206c(param_3,*(undefined8 *)OVRMeshRenderer_TypeInfo);
                    /* try { // try from 05837dc4 to 05937e07 has its CatchHandler @ 05837cb4 */
        FUN_05890ac0(uVar6,0x32,&local_38,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)PTR_DAT_06a0f8c0 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_058922dc(uVar6,0);
                    /* try { // try from 05837e08 to 05937e17 has its CatchHandler @ 05837e18 */
        FUN_05836280(uVar6,param_1,param_2,local_38);
                    /* catch() { ... } // from try @ 05837dac with catch @ 05837e18
                       catch() { ... } // from try @ 05837e08 with catch @ 05837e18 */
                    /* try { // try from 05837e1c to 05937e1f has its CatchHandler @ 05837e28 */
                    /* try { // try from 05837e20 to 05937e2b has its CatchHandler @ 05837cb4 */
        return;
      }
      uVar6 = FUN_05838210();
      uVar7 = thunk_FUN_02dfd288(System_PlatformNotSupportedException_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


