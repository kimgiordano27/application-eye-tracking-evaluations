/*
FUNCTION_NAME: FUN_0357b520
ENTRY_POINT: 0357b520
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21
*/


void FUN_0357b520(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  
  if ((DAT_045379dc & 1) == 0) {
    FUN_01c5d288(Method_Oculus_Platform_Request<MicrophoneAvailabilityState>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<NCommand>_Dequeue__);
    FUN_01c5d288(Method_Oculus_Platform_Request<OrgScopedID>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<NCommand>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<OrgScopedID>_OnComplete__);
    FUN_01c5d288(Method_System_ReadOnlySpan<Vector3>_get_Empty__);
    FUN_01c5d288(Method_Oculus_Platform_Request<Party>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<PingResult>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<PlatformInitialize>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<PlatformInitialize>_OnComplete__);
    FUN_01c5d288(Method_Oculus_Platform_Request<ProductList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<Purchase>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Request<Purchase>_OnComplete__);
    FUN_01c5d288(Method_Oculus_Platform_Request<PurchaseList>__ctor__);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_045379dc = 1;
  }
  puVar4 = Method_Oculus_Platform_Request<Purchase>_OnComplete__;
  puVar3 = Method_Oculus_Platform_Request<OrgScopedID>_OnComplete__;
  puVar2 = PTR_DAT_0422fb28;
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 != 0) {
    do {
      if (*(int *)(lVar5 + 0x20) < 1) {
        return;
      }
      FUN_02fcd270(&local_78,lVar5,*(undefined8 *)puVar4);
      bVar1 = local_68;
      uVar8 = uStack_70;
      uVar7 = local_78;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032e935c(uVar8,0,0);
      if ((uVar6 & 1) == 0) {
        uVar9 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_032e04b8(uVar9,0);
        uVar6 = FUN_032e935c(uVar8,uVar9,0);
        if ((uVar6 & 1) == 0) {
          uVar9 = *(undefined8 *)Method_Oculus_Platform_Request<OrgScopedID>__ctor__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar9 = FUN_032e04b8(uVar9,0);
          uVar6 = FUN_032e935c(uVar8,uVar9,0);
          if ((uVar6 & 1) == 0) {
            uVar9 = *(undefined8 *)
                     Method_Oculus_Platform_Request<MicrophoneAvailabilityState>__ctor__;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar9 = FUN_032e04b8(uVar9,0);
            uVar6 = FUN_032e935c(uVar8,uVar9,0);
            if ((uVar6 & 1) == 0) goto LAB_0357b828;
            uVar7 = thunk_FUN_01c495e4(uVar7,*(undefined8 *)
                                              Method_System_Collections_Generic_Queue<NCommand>_Dequeue__
                                      );
            uVar8 = *(undefined8 *)Method_Oculus_Platform_Request<Party>__ctor__;
            lVar5 = param_1 + 0xb8;
          }
          else {
            uVar7 = thunk_FUN_01c495e4(uVar7,*(undefined8 *)
                                              Method_System_Collections_Generic_Queue<NCommand>__ctor__
                                      );
            uVar8 = *(undefined8 *)Method_Oculus_Platform_Request<PingResult>__ctor__;
            lVar5 = param_1 + 0xb0;
          }
        }
        else {
          uVar7 = thunk_FUN_01c495e4(uVar7,*(undefined8 *)
                                            Method_System_ReadOnlySpan<Vector3>_get_Empty__);
          uVar8 = *(undefined8 *)Method_Oculus_Platform_Request<PlatformInitialize>__ctor__;
          lVar5 = param_1 + 0xa8;
        }
        FUN_023b3d4c(param_1,uVar7,lVar5,bVar1 & 1,uVar8);
      }
      else {
        bVar1 = bVar1 & 1;
        FUN_023b3f48(param_1,uVar7,param_1 + 0xa8,bVar1,
                     *(undefined8 *)Method_Oculus_Platform_Request<Purchase>__ctor__);
        FUN_023b3f48(param_1,uVar7,param_1 + 0xb0,bVar1,
                     *(undefined8 *)Method_Oculus_Platform_Request<ProductList>__ctor__);
        FUN_023b3f48(param_1,uVar7,param_1 + 0xb8,bVar1,
                     *(undefined8 *)Method_Oculus_Platform_Request<PlatformInitialize>_OnComplete__)
        ;
      }
LAB_0357b828:
      lVar5 = *(long *)(param_1 + 0xa0);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


