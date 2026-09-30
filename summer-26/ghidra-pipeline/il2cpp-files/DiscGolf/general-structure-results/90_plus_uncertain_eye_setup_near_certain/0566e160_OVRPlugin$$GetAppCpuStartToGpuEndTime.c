/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 0566e160
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(long param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  int unaff_w19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000008;
  
code_r0x0566e160:
  if (param_1 != 0) {
    FUN_0631fcd8(param_1,*(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo,0);
    lVar4 = thunk_FUN_0631c110(unaff_x20,0);
    if (lVar4 != 0) {
      uVar6 = 0;
      do {
        FUN_06322274(uVar6,lVar4,*(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
        lVar4 = thunk_FUN_0631c110(unaff_x20,0);
        if (lVar4 == 0) break;
        FUN_0631fcd8(lVar4,*unaff_x29,0);
        lVar4 = thunk_FUN_0631c110(unaff_x20,0);
        if (lVar4 == 0) break;
        FUN_06322274(0,lVar4,*unaff_x29,0);
        lVar4 = *(long *)(unaff_x28 + 0x30);
        if (lVar4 == 0) break;
        if (*(char *)(lVar4 + 0xd5) == '\0') {
          cVar3 = *(char *)(lVar4 + 0xd6);
          lVar4 = thunk_FUN_0631c110(unaff_x20,0);
          if (cVar3 == '\0') {
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)System_Collections_Generic_List<IRaycaster>_TypeInfo,0
                        );
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fad4(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IGravityController>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            uVar5 = FUN_0631f9c0(lVar4,*unaff_x21,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = thunk_FUN_0631c110(unaff_x20,0);
              if (lVar4 != 0) {
                uVar6 = *unaff_x21;
                uVar7 = 0x40400000;
                goto LAB_0566e630;
              }
              break;
            }
          }
          else {
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)System_Collections_Generic_List<IRaycaster>_TypeInfo,0
                        );
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fad4(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IGravityController>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            uVar5 = FUN_0631f9c0(lVar4,*unaff_x21,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = thunk_FUN_0631c110(unaff_x20,0);
              if (lVar4 != 0) {
                uVar6 = *unaff_x21;
                uVar7 = 0x40800000;
                goto LAB_0566e630;
              }
              break;
            }
          }
        }
        else {
          lVar4 = thunk_FUN_0631c110(unaff_x20,0);
          if (unaff_w19 < 1) {
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fad4(lVar4,*(undefined8 *)System_Collections_Generic_List<IRaycaster>_TypeInfo,0
                        );
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IGravityController>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            uVar5 = FUN_0631f9c0(lVar4,*unaff_x21,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = thunk_FUN_0631c110(unaff_x20,0);
              if (lVar4 != 0) {
                uVar6 = *unaff_x21;
                uVar7 = 0x3f800000;
                goto LAB_0566e630;
              }
              break;
            }
          }
          else {
            if (lVar4 == 0) break;
            FUN_0631fad4(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkAdapter>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)System_Collections_Generic_List<IRaycaster>_TypeInfo,0
                        );
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<INetworkHooks>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IMetricObserver>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            FUN_0631fcd8(lVar4,*(undefined8 *)
                                System_Collections_Generic_List<IGravityController>_TypeInfo,0);
            lVar4 = thunk_FUN_0631c110(unaff_x20,0);
            if (lVar4 == 0) break;
            uVar5 = FUN_0631f9c0(lVar4,*unaff_x21,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = thunk_FUN_0631c110(unaff_x20,0);
              if (lVar4 == 0) break;
              uVar7 = 0;
              uVar6 = *unaff_x21;
LAB_0566e630:
              FUN_06322274(uVar7,lVar4,uVar6,0);
            }
          }
        }
        do {
          uVar1 = *(uint *)(unaff_x25 + 0x18);
          unaff_x26 = unaff_x26 + 1;
          if ((int)uVar1 <= (int)unaff_x26) {
            do {
              unaff_x22 = unaff_x22 + 1;
              if ((long)(int)*(uint *)(in_stack_00000008 + 0x18) <= (long)unaff_x22) {
                return;
              }
              if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0566e680;
              unaff_x25 = *(long *)(in_stack_00000008 + unaff_x22 * 8 + 0x20);
            } while ((unaff_x25 == 0) || (uVar1 = *(uint *)(unaff_x25 + 0x18), (int)uVar1 < 1));
            unaff_x26 = 0;
            unaff_x27 = unaff_x25 + 0x20;
          }
          if (uVar1 <= (uint)unaff_x26) {
LAB_0566e680:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          unaff_x28 = *(long *)(unaff_x27 + unaff_x26 * 8);
          if ((unaff_x28 == 0) || (*(long *)(unaff_x28 + 0x20) == 0)) goto LAB_0566e67c;
          unaff_x20 = *(long **)(*(long *)(unaff_x28 + 0x20) + 0x28);
          if (unaff_x20 == (long *)0x0) {
LAB_0566e0bc:
            unaff_x20 = (long *)0x0;
          }
          else {
            bVar2 = *(byte *)(*unaff_x23 + 0x130);
            if (*(byte *)(*unaff_x20 + 0x130) < bVar2) goto LAB_0566e0bc;
            if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x23) {
              unaff_x20 = (long *)0x0;
            }
          }
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar5 = FUN_0634eb94(unaff_x20,0,0);
        } while ((uVar5 & 1) == 0);
        if (0 < unaff_w19) goto code_r0x0566e104;
        if ((unaff_x20 == (long *)0x0) || (lVar4 = thunk_FUN_0631c110(unaff_x20,0), lVar4 == 0))
        break;
        FUN_0631fad4(lVar4,*(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo,0)
        ;
        lVar4 = thunk_FUN_0631c110(unaff_x20,0);
        if (lVar4 == 0) break;
        FUN_06322274(0x3f800000,lVar4,
                     *(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0);
        lVar4 = thunk_FUN_0631c110(unaff_x20,0);
        if (lVar4 == 0) break;
        FUN_0631fad4(lVar4,*(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo,0);
        lVar4 = thunk_FUN_0631c110(unaff_x20,0);
        if (lVar4 == 0) break;
        uVar6 = 0x3f800000;
      } while( true );
    }
  }
LAB_0566e67c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x0566e104:
  if ((unaff_x20 == (long *)0x0) || (lVar4 = thunk_FUN_0631c110(unaff_x20,0), lVar4 == 0))
  goto LAB_0566e67c;
  FUN_0631fcd8(lVar4,*(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
  lVar4 = thunk_FUN_0631c110(unaff_x20,0);
  if (lVar4 == 0) goto LAB_0566e67c;
  FUN_06322274(0,lVar4,*(undefined8 *)System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0);
  param_1 = thunk_FUN_0631c110(unaff_x20,0);
  goto code_r0x0566e160;
}


