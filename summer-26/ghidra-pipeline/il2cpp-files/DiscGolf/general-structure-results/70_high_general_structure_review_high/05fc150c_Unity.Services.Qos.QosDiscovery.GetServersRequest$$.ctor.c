/*
FUNCTION_NAME: Unity.Services.Qos.QosDiscovery.GetServersRequest$$.ctor
ENTRY_POINT: 05fc150c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Qos_QosDiscovery_GetServersRequest___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar10;
  uint unaff_w20;
  undefined8 uVar11;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  uint uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined *puVar9;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0f5d8);
  *(undefined1 *)(unaff_x22 + 0x769) = 1;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  _uStack0000000000000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06db76de == '\0') {
    FUN_02d965b8(PTR_DAT_06a10750);
    DAT_06db76de = '\x01';
  }
  lVar5 = *unaff_x21;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar5 = *unaff_x21;
  }
  puVar9 = PTR_DAT_06a0f5d8;
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x11) == '\0') {
    return;
  }
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 != 0) {
    iVar12 = 0;
    lVar14 = (long)(int)unaff_w23;
    uStack000000000000000c = unaff_w24;
    do {
      lVar5 = *(long *)(lVar5 + 0xa8);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc4288 == '\0') {
        FUN_02d965b8(puVar9);
        DAT_06dc4288 = '\x01';
      }
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w23) goto LAB_05fc1954;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) break;
      iVar1 = *(int *)(lVar5 + 0x18);
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (iVar1 <= iVar12) {
LAB_05fc1698:
        if (lVar5 != 0) {
          iVar13 = 0;
          goto LAB_05fc16a4;
        }
        break;
      }
      if (lVar5 == 0) break;
      lVar5 = *(long *)(lVar5 + 0xa8);
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc4288 == '\0') {
        FUN_02d965b8(puVar9);
        DAT_06dc4288 = '\x01';
      }
      if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w23) goto LAB_05fc1954;
      lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
      if (lVar5 == 0) break;
      uVar4 = FUN_040412e4(lVar5,iVar12,
                           *(undefined8 *)
                            Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (((unaff_w20 ^ uVar4) & 0xffff) == 0) goto LAB_05fc1698;
      iVar12 = iVar12 + 1;
    } while (lVar5 != 0);
  }
  goto LAB_05fc178c;
LAB_05fc16a4:
  do {
    lVar5 = *(long *)(lVar5 + 0xb0);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc4288 == '\0') {
      FUN_02d965b8(puVar9);
      DAT_06dc4288 = '\x01';
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w23) {
LAB_05fc1954:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= iVar13) {
      if (iVar12 < iVar1) goto LAB_05fc1958;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_05fc1afc(*(long *)(unaff_x19 + 0x18),&stack0x00000060,&stack0x00000048);
        uVar6 = _uStack0000000000000058;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          if (*(char *)(*(long *)(unaff_x19 + 0x20) + 0x18) != '\0') {
            uVar3 = uStack0000000000000058;
            if ((uStack000000000000000c & 1) == 0) {
              if (*(int *)(*(long *)PTR_DAT_06a0d5e8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar6 = FUN_0638f988(uVar6 & 0xffffffff,0);
              if ((uVar6 & 1) != 0) {
                uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
                FUN_02979e58(uVar11);
                uVar11 = FUN_05fc08bc(uVar11,&stack0x00000060);
                uVar7 = thunk_FUN_02dfd288(PTR_DAT_069fb9d8);
                uVar7 = FUN_02d966a4(uVar7,5);
                FUN_02979e58();
                puVar9 = Method_System_Array_Empty<Vector2>__;
                goto FUN_05fc1998;
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_06a0d5e8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar6 = FUN_0638f988(uVar6 & 0xffffffff,0);
              if ((uVar6 & 1) == 0) {
                uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
                FUN_02979e58(uVar11);
                uVar11 = FUN_05fc08bc(uVar11,&stack0x00000060);
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar3);
                uVar7 = thunk_FUN_02dfd288(
                                          System_Collections_Generic_Dictionary<TeleportationProvider,_List<IXRInteractor>>_TypeInfo
                                          );
                uVar7 = thunk_FUN_02dd2d7c(uVar7,&stack0x00000010);
                lVar5 = *(long *)(unaff_x19 + 0x10);
                FUN_02979e58(lVar5);
                uVar10 = *(undefined8 *)(lVar5 + 0x10);
                uVar8 = thunk_FUN_02dfd288(Method_System_Array_Empty<SkinQuality>__);
                uVar11 = FUN_0536e120(uVar8,uVar7,uVar10,uVar11,0);
                goto LAB_05fc1a1c;
              }
            }
          }
          puVar2 = Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__;
          if ((*(long *)(unaff_x19 + 0x10) != 0) &&
             (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 200), lVar5 != 0)) {
            FUN_03f20aec(&stack0x00000020,lVar5,
                         *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
            in_stack_00000010 = 0;
            in_stack_00000018 = &stack0x00000020;
            do {
              uVar6 = FUN_05130778(&stack0x00000020,*(undefined8 *)puVar2);
              if ((uVar6 & 1) == 0) {
                FUN_05130774(&stack0x00000020,
                             *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
                return;
              }
              uVar4 = uStack0000000000000030;
              if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
            } while (((uVar4 ^ unaff_w20) & 0xffff) != 0);
            thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
            uVar11 = thunk_FUN_02dd3144();
            uVar7 = thunk_FUN_02dfd288(Method_System_Array_Empty<string>__);
            FUN_054e8008(uVar11,uVar7,0);
            uVar7 = thunk_FUN_02dfd288(Method_System_Array_Empty<Thread>__);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar11,uVar7);
          }
        }
      }
      break;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) break;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xb0);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc4288 == '\0') {
      FUN_02d965b8(puVar9);
      DAT_06dc4288 = '\x01';
    }
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_w23) goto LAB_05fc1954;
    lVar5 = *(long *)(lVar5 + lVar14 * 8 + 0x20);
    if (lVar5 == 0) break;
    uVar4 = FUN_040412e4(lVar5,iVar13,
                         *(undefined8 *)Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
    ;
    if (((unaff_w20 ^ uVar4) & 0xffff) == 0) {
LAB_05fc1958:
      uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
      FUN_02979e58(uVar11);
      uVar11 = FUN_05fc08bc(uVar11,&stack0x00000060);
      uVar7 = thunk_FUN_02dfd288(PTR_DAT_069fb9d8);
      uVar7 = FUN_02d966a4(uVar7,5);
      FUN_02979e58();
      puVar9 = Method_System_Array_Empty<Type>__;
FUN_05fc1998:
      uVar8 = thunk_FUN_02dfd288(puVar9);
      FUN_02978e90(uVar7,0,uVar8);
      lVar5 = *(long *)(unaff_x19 + 0x10);
      FUN_02979e58(lVar5);
      FUN_02978e90(uVar7,1,*(undefined8 *)(lVar5 + 0x10));
      uVar8 = thunk_FUN_02dfd288(Method_System_Array_Empty<uint>__);
      FUN_02978e90(uVar7,2,uVar8);
      FUN_02978e90(uVar7,3,uVar11);
      uVar11 = thunk_FUN_02dfd288(Method_System_Array_Empty<UnmanagedType>__);
      FUN_02978e90(uVar7,4,uVar11);
      uVar11 = FUN_0536dde4(uVar7,0);
LAB_05fc1a1c:
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar7 = thunk_FUN_02dd3144();
      FUN_054e8008(uVar7,uVar11,0);
      uVar11 = thunk_FUN_02dfd288(Method_System_Array_Empty<Thread>__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar11);
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    iVar13 = iVar13 + 1;
  } while (lVar5 != 0);
LAB_05fc178c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


