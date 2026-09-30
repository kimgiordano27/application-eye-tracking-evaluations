/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 076ad12c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose
               (undefined8 param_1,long param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  if (param_2 != 0) {
    FUN_076a5bb8(param_2,*(undefined8 *)PTR_DAT_08504418);
    if (*(long *)(unaff_x20 + 0x138) != 0) {
      lVar4 = FUN_076a5bb8(*(long *)(unaff_x20 + 0x138),*(undefined8 *)PTR_DAT_08504428);
      if ((*(long *)(unaff_x20 + 0x138) != 0) &&
         (lVar5 = FUN_076a5bb8(*(long *)(unaff_x20 + 0x138),*(undefined8 *)PTR_DAT_08503fe8),
         lVar5 != 0)) {
        if ((*(char *)(lVar5 + 0x1ac) != '\0') &&
           (uVar6 = FUN_0773de04(unaff_x20 + 0x1c8,0), (uVar6 & 1) != 0)) {
          if ((*(long *)(unaff_x20 + 0x1c8) == 0) || (FUN_0779304c(), lVar4 == 0))
          goto LAB_076ad6c0;
          FUN_077089f8(lVar4,uStack0000000000000050,uStack0000000000000058,0);
        }
        uVar9 = *(undefined8 *)(unaff_x20 + 0x1c0);
        if (*(int *)(*(long *)PTR_DAT_08503fc0 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        sVar1 = FUN_0769ada4(uVar9,0);
        if (0 < *(int *)(unaff_x20 + 600)) {
          uVar6 = 0;
          lVar10 = 0x2c;
          do {
            lVar8 = *(long *)(unaff_x20 + 0x250);
            if (lVar8 == 0) goto LAB_076ad6c0;
            if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_076ad6c4;
            FUN_07697f44(lVar8 + lVar10,0);
            uVar6 = uVar6 + 1;
            lVar10 = lVar10 + 0x68;
          } while ((long)uVar6 < (long)*(int *)(unaff_x20 + 600));
        }
        if (*(int *)(*(long *)PTR_DAT_085044a0 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_076ae584();
        if (0 < *(int *)(unaff_x20 + 600)) {
          uVar6 = 0;
          do {
            if ((*(long *)(unaff_x20 + 0x250) == 0) || (*(long *)(unaff_x20 + 0x230) == 0))
            goto LAB_076ad6c0;
            if (*(uint *)(*(long *)(unaff_x20 + 0x250) + 0x18) <= uVar6) goto LAB_076ad6c4;
            FUN_076aed08();
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(unaff_x20 + 600));
          if (0 < *(int *)(unaff_x20 + 600)) {
            uVar6 = 0;
            do {
              if ((*(long *)(unaff_x20 + 0x250) == 0) || (*(long *)(unaff_x20 + 0x240) == 0))
              goto LAB_076ad6c0;
              if (*(uint *)(*(long *)(unaff_x20 + 0x250) + 0x18) <= uVar6) goto LAB_076ad6c4;
              FUN_076af7c8();
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int *)(unaff_x20 + 600));
            if (0 < *(int *)(unaff_x20 + 600)) {
              uVar6 = 0;
              do {
                if ((*(long *)(unaff_x20 + 0x250) == 0) || (*(long *)(unaff_x20 + 0x238) == 0))
                goto LAB_076ad6c0;
                if (*(uint *)(*(long *)(unaff_x20 + 0x250) + 0x18) <= uVar6) goto LAB_076ad6c4;
                FUN_076afdf0();
                uVar6 = uVar6 + 1;
              } while ((long)uVar6 < (long)*(int *)(unaff_x20 + 600));
              if (0 < *(int *)(unaff_x20 + 600)) {
                if (unaff_x19 == 0) goto LAB_076ad6c0;
                uVar6 = 0;
                lVar10 = 0x20;
                do {
                  if ((uVar6 == 0) && (*(char *)(unaff_x19 + 0x18) == '\0')) {
                    if (*(int *)(*(long *)PTR_DAT_085042d8 + 0xe4) == 0) {
                      thunk_FUN_03ae8be4();
                    }
                    iVar3 = FUN_07700690(lVar5,0);
                    if (iVar3 != 0) {
                      if (lVar4 == 0) goto LAB_076ad6c0;
                      FUN_07708504(lVar4,0);
                      FUN_07708618(lVar4,0);
                      uVar11 = *(undefined4 *)(lVar5 + 0x1f0);
                      uVar12 = *(undefined4 *)(lVar5 + 500);
                      uVar13 = *(undefined4 *)(lVar5 + 0x1f8);
                      uVar14 = *(undefined4 *)(lVar5 + 0x1fc);
                      if (*(int *)(*(long *)PTR_DAT_08504498 + 0xe4) == 0) {
                        thunk_FUN_03ae8be4();
                      }
                      Unity_Services_Friends_Exceptions_FriendsServiceException__get_ErrorCode
                                (uVar11,uVar12,uVar13,uVar14);
                    }
                  }
                  lVar8 = *(long *)(unaff_x20 + 0x250);
                  if (lVar8 == 0) goto LAB_076ad6c0;
                  if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_076ad6c4:
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  FUN_0769cc0c(*(undefined8 *)(unaff_x20 + 0x1c0),lVar8 + lVar10,&stack0x00000030,0)
                  ;
                  if (*(long *)(unaff_x20 + 0x248) == 0) goto LAB_076ad6c0;
                  FUN_076b139c();
                  if ((*(long *)(unaff_x20 + 0x250) == 0) || (*(long *)(unaff_x20 + 0x240) == 0))
                  goto LAB_076ad6c0;
                  if (*(uint *)(*(long *)(unaff_x20 + 0x250) + 0x18) <= uVar6) goto LAB_076ad6c4;
                  FUN_076af7c8();
                  if ((*(long *)(unaff_x20 + 0x250) == 0) || (*(long *)(unaff_x20 + 0x238) == 0))
                  goto LAB_076ad6c0;
                  if (*(uint *)(*(long *)(unaff_x20 + 0x250) + 0x18) <= uVar6) goto LAB_076ad6c4;
                  FUN_076afdf0();
                  if (*(long *)(unaff_x20 + 0x1c0) == 0) goto LAB_076ad6c0;
                  if (*(char *)(*(long *)(unaff_x20 + 0x1c0) + 0x69) != '\0') {
                    sVar2 = FUN_07cddd70(lVar8 + lVar10 + 8,0);
                    if ((sVar2 <= sVar1) &&
                       (sVar2 = FUN_07cddd78(lVar8 + lVar10 + 8,0), sVar1 <= sVar2)) {
                      if (*(long *)(unaff_x20 + 0x168) == 0) goto LAB_076ad6c0;
                      FUN_076b2928();
                    }
                  }
                  uVar6 = uVar6 + 1;
                  lVar10 = lVar10 + 0x68;
                } while ((long)uVar6 < (long)*(int *)(unaff_x20 + 600));
              }
            }
          }
        }
        uVar6 = FUN_076ac8c8();
        if (((uVar6 & 1) != 0) && (lVar10 = *(long *)(unaff_x20 + 0x160), lVar10 != 0)) {
          if (lVar4 == 0) goto LAB_076ad6c0;
          FUN_07708920(lVar4,0);
          FUN_07708618(lVar4,0);
          FUN_07795b4c(lVar10);
        }
        uVar6 = FUN_07707d0c(lVar5,0);
        uVar7 = FUN_07707ad4(lVar5,0);
        if (((uVar6 & 1) != 0) && ((uVar7 & 1) != 0)) {
          lVar5 = *(long *)(unaff_x20 + 0x178);
          if (*(int *)(*(long *)PTR_DAT_08491900 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if ((lVar5 == 0) || (FUN_07714580(lVar5), lVar4 == 0)) goto LAB_076ad6c0;
          FUN_07708ac8(lVar4,uStack0000000000000020,uStack0000000000000028,0);
        }
        return;
      }
    }
  }
LAB_076ad6c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


