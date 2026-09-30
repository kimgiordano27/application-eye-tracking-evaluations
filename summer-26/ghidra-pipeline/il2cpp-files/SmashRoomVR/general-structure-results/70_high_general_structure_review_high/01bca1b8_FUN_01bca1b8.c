/*
FUNCTION_NAME: FUN_01bca1b8
ENTRY_POINT: 01bca1b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01bca1b8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 01bca1c8 to 01cca1db has its CatchHandler @ 01bca200 */
  if ((DAT_03fed1cf & 1) == 0) {
                    /* try { // try from 01bca1dc to 01cca213 has its CatchHandler @ 01bca150 */
    thunk_FUN_01ad9084(Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_PointerCancelEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__26_System_Collections_IEnumerator_Reset__
                      );
                    /* catch() { ... } // from try @ 01bca1c8 with catch @ 01bca200 */
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed1cf = 1;
  }
  FUN_01bca524(param_1);
                    /* try { // try from 01bca228 to 01cca22b has its CatchHandler @ 01bca238 */
  lVar6 = FUN_0391c2b8(param_1,0);
  if (lVar6 == 0) goto LAB_01bca504;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bca228 with catch @ 01bca238
                        */
  FUN_0391fb70(lVar6,1,0);
  lVar6 = FUN_0391c27c(param_1,0);
  if ((*(long *)(param_1 + 0xb8) == 0) ||
     (lVar7 = FUN_0391c27c(*(long *)(param_1 + 0xb8),0), lVar7 == 0)) goto LAB_01bca504;
  fVar15 = *(float *)(param_1 + 0xac);
  fVar16 = *(float *)(param_1 + 0xb0);
  FUN_03927438(*(undefined4 *)(param_1 + 0xa8),fVar15,fVar16,lVar7,0);
  if (lVar6 == 0) goto LAB_01bca504;
  FUN_03928dd4(lVar6,0);
  if ((*(long *)(param_1 + 0xb8) == 0) ||
     (lVar6 = FUN_0391c27c(*(long *)(param_1 + 0xb8),0), lVar6 == 0)) goto LAB_01bca504;
  FUN_039274a0(lVar6,0);
  fVar14 = (float)FUN_039145fc(0);
  uVar13 = (ulong)(uint)(fVar15 * DAT_00b556e8);
  FUN_03914cb4(fVar14 * DAT_00b556e8,uVar13,fVar16 * DAT_00b556e8,0);
  lVar6 = FUN_0391c27c(param_1,0);
  if (lVar6 == 0) goto LAB_01bca504;
  FUN_03928f24(0,uVar13,0,lVar6,0);
  plVar12 = (long *)(param_1 + 0x70);
  lVar6 = *plVar12;
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    if (lVar7 == 0) goto LAB_01bca504;
LAB_01bca320:
    lVar6 = FUN_01b47fd0(*(undefined8 *)
                          Method_Oculus_Interaction_PointableElement_<>c_<_ctor>b__43_0__,
                         *(undefined4 *)(lVar7 + 0x18));
    *plVar12 = lVar6;
    thunk_FUN_01b4f09c(plVar12,lVar6);
    lVar6 = *plVar12;
    if (lVar6 == 0) goto LAB_01bca504;
  }
  else {
    if (lVar7 == 0) goto LAB_01bca504;
    if (*(int *)(lVar6 + 0x18) < *(int *)(lVar7 + 0x18)) goto LAB_01bca320;
  }
  FUN_03065a94(lVar6,0);
  puVar4 = Method_Unity_VisualScripting_OptimizedReflection_<>c_<SupportsOptimization>b__39_0__;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar1 < 1) {
LAB_01bca430:
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 != 0) {
        iVar2 = *(int *)(lVar6 + 0x18);
        if (iVar2 < 1) {
LAB_01bca47c:
          lVar6 = *(long *)(param_1 + 0x68);
          if (lVar6 != 0) {
                    /* try { // try from 01bca484 to 01cca48f has its CatchHandler @ 01bca500 */
            uVar1 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar10 = 0;
            do {
                    /* try { // try from 01bca49c to 01cca4a3 has its CatchHandler @ 01bca4ec */
              if (*(uint *)(lVar6 + 0x18) <= uVar10) {
LAB_01bca520:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
                    /* try { // try from 01bca4a8 to 01cca4b3 has its CatchHandler @ 01bca4d0 */
              lVar6 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
              if (lVar6 == 0) break;
              lVar6 = FUN_0391c2b8(lVar6,0);
              lVar7 = *(long *)(param_1 + 0xa0);
              if (lVar7 == 0) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01bca520;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01bca4a8 with catch @ 01bca4d0
                        */
              lVar7 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
              if ((lVar7 == 0) || (lVar6 == 0)) break;
              FUN_0391fb70(lVar6,0 < *(int *)(lVar7 + 0x18),0);
              uVar10 = uVar10 + 1;
              if (uVar1 == uVar10) {
                return;
              }
              lVar6 = *(long *)(param_1 + 0x68);
              if (lVar6 == 0) break;
            } while( true );
          }
        }
        else {
          iVar11 = 0;
          do {
            lVar6 = FUN_02b59714(lVar6,iVar11,*(undefined8 *)puVar4);
            if (lVar6 == 0) break;
            FUN_0391fb70(lVar6,1,0);
            iVar11 = iVar11 + 1;
                    /* try { // try from 01bca468 to 01cca483 has its CatchHandler @ 01bca468
                       catch(type#1 @ 00000000) { ... } // from try @ 01bca468 with catch @ 01bca468
                       catch(type#1 @ 00000000) { ... } // from try @ 01bca4f8 with catch @ 01bca468
                        */
            if (iVar2 == iVar11) goto LAB_01bca47c;
            lVar6 = *(long *)(param_1 + 0x78);
          } while (lVar6 != 0);
        }
      }
    }
    else {
      uVar13 = 0;
      do {
        uVar8 = FUN_02b59714(lVar6,uVar13 & 0xffffffff,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar9 = FUN_03923030(uVar8,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(param_1 + 0x80) == 0) break;
          lVar7 = *(long *)(param_1 + 0x70);
          lVar6 = FUN_02b59714(*(long *)(param_1 + 0x80),uVar13 & 0xffffffff,*(undefined8 *)puVar4);
          if ((lVar6 == 0) || (bVar5 = FUN_0391fbb4(lVar6,0), lVar7 == 0)) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_01bca520;
          *(byte *)(lVar7 + uVar13 + 0x20) = bVar5 & 1;
          if ((*(long *)(param_1 + 0x80) == 0) ||
             (lVar6 = FUN_02b59714(*(long *)(param_1 + 0x80),uVar13 & 0xffffffff,
                                   *(undefined8 *)puVar4), lVar6 == 0)) break;
          FUN_0391fb70(lVar6,0,0);
        }
        if ((ulong)uVar1 - 1 == uVar13) goto LAB_01bca430;
        lVar6 = *(long *)(param_1 + 0x80);
        uVar13 = uVar13 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_01bca504:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


