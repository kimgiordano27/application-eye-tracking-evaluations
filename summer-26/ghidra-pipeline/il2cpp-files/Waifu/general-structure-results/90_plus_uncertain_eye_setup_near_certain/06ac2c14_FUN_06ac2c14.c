/*
FUNCTION_NAME: FUN_06ac2c14
ENTRY_POINT: 06ac2c14
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_11;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_06ac2c14(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2bf8 with catch @ 06ac2c14
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2bb4 with catch @ 06ac2c18
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2b7c with catch @ 06ac2c1c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2b4c with catch @ 06ac2c20
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2b14 with catch @ 06ac2c24
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2c0c with catch @ 06ac2c28
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2aa0 with catch @ 06ac2c2c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06ac2ae4 with catch @ 06ac2c30
                        */
  if ((DAT_086e2219 & 1) == 0) {
                    /* try { // try from 06ac2c40 to 06bc2c43 has its CatchHandler @ 06ac2c70 */
                    /* try { // try from 06ac2c44 to 06bc2c77 has its CatchHandler @ 06ac2920 */
    FUN_0335b6c8(&DAT_083cca30,1);
    DataMemoryBarrier(2,3);
    DAT_086e2219 = 1;
  }
  iVar6 = 0;
                    /* catch() { ... } // from try @ 06ac2c40 with catch @ 06ac2c70 */
                    /* try { // try from 06ac2c78 to 06bc2c7f has its CatchHandler @ 06ac2c80 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06ac2c78 with catch @ 06ac2c80
                        */
                    /* try { // try from 06ac2c84 to 06bc34ff has its CatchHandler @ 06ac2c84
                       catch() { ... } // from try @ 06ac2c84 with catch @ 06ac2c84
                       catch() { ... } // from try @ 06ac359c with catch @ 06ac2c84
                       catch() { ... } // from try @ 06ac3710 with catch @ 06ac2c84
                       catch() { ... } // from try @ 06ac373c with catch @ 06ac2c84 */
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  do {
    uVar1 = FUN_06ac2164(param_1,iVar6,&local_68);
    lVar2 = local_68;
    if ((uVar1 & 1) != 0) {
      if (local_68 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar2 = (*DAT_086ef190)(lVar2);
      if (*(char *)(param_1 + 0x80) != '\0') {
        plVar7 = *(long **)(param_1 + 0x38);
        if (plVar7 == (long *)0x0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        lVar4 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cca30) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
              goto LAB_06ac2d34;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cca30,9);
LAB_06ac2d34:
        uVar1 = (*(code *)*puVar3)(plVar7,iVar6,&local_88,puVar3[1]);
        if ((uVar1 & 1) != 0) {
          if (local_68 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          FUN_07a85e8c((undefined4)local_88,local_88._4_4_,(undefined4)uStack_80,local_68,0);
          if ((local_68 == 0) ||
             (FUN_07a85f24(uStack_80._4_4_,(undefined4)local_78,local_78._4_4_,local_70,local_68,0),
             lVar2 == 0)) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          if (DAT_086ef280 == (code *)0x0) {
            DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
          }
          uVar1 = (*DAT_086ef280)(lVar2);
          if ((uVar1 & 1) == 0) {
            if (DAT_086ef278 == (code *)0x0) {
              DAT_086ef278 = (code *)FUN_033d1b68(
                                                 "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                 );
            }
            (*DAT_086ef278)(lVar2,1);
            lVar2 = local_68;
            if (local_68 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
            if (DAT_086f1ee0 == (code *)0x0) {
              DAT_086f1ee0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::WakeUp()");
            }
            (*DAT_086f1ee0)(lVar2);
          }
          goto LAB_06ac2e80;
        }
      }
      if (lVar2 == 0) {
OVRPlugin__GetAdaptiveGPUPerformanceScale:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (DAT_086ef280 == (code *)0x0) {
        DAT_086ef280 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_activeSelf()");
      }
      uVar1 = (*DAT_086ef280)(lVar2);
      lVar4 = local_68;
      if ((uVar1 & 1) != 0) {
        if (local_68 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        if (DAT_086f1ed0 == (code *)0x0) {
          DAT_086f1ed0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::Sleep()");
        }
        (*DAT_086f1ed0)(lVar4);
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar2,0);
      }
    }
LAB_06ac2e80:
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x13) {
      return;
    }
  } while( true );
}


