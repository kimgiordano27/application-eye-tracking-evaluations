/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.ResponseHandler$$TryDeserializeResponse
ENTRY_POINT: 05fb8b98
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_DistributedAuthority_Http_ResponseHandler__TryDeserializeResponse(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x20;
  int unaff_w21;
  uint uVar22;
  long unaff_x22;
  int iVar23;
  long unaff_x23;
  undefined8 unaff_x25;
  ulong unaff_x26;
  int iVar24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int iVar25;
  long *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  uint uStack0000000000000060;
  undefined8 in_stack_00000068;
  
  do {
    uVar22 = uStack0000000000000060;
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05052fb4(unaff_x23,uVar22 & 0xffff,*unaff_x28);
    FUN_05fb79a0();
    while (uVar11 = FUN_0515e9d0(&stack0x00000050,*unaff_x27), (uVar11 & 1) == 0) {
      FUN_0515e9cc(&stack0x00000050,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar16 = *(long *)(unaff_x22 + 0xb0);
      if (lVar16 == 0) goto LAB_05fb915c;
      if (*(uint *)(lVar16 + 0x18) <= unaff_x26) goto LAB_05fb9160;
      lVar16 = *(long *)(lVar16 + unaff_x26 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05fb915c;
      FUN_04042130(&stack0x00000010,lVar16,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000010 = 0;
      in_stack_00000058 = in_stack_00000018;
      in_stack_00000068 = in_stack_00000028;
      _uStack0000000000000060 = in_stack_00000020;
      while (uVar11 = FUN_0515e9d0(&stack0x00000050,*unaff_x27), (uVar11 & 1) != 0) {
        uVar22 = uStack0000000000000060;
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05052fb4(unaff_x23,uVar22 & 0xffff,*unaff_x28);
        FUN_05fb79a0();
      }
      FUN_0515e9cc(&stack0x00000050,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      unaff_x26 = unaff_x26 + 1;
      if (unaff_x26 == 3) {
        do {
          unaff_w21 = unaff_w21 + 1;
          if (*(int *)(unaff_x20 + 0x18) <= unaff_w21) {
            if (in_stack_00000008 == 0) goto LAB_05fb915c;
            uVar22 = 0;
            goto LAB_05fb8d58;
          }
          lVar16 = FUN_050522c4();
          if (*(char *)(lVar16 + 0x40) != '\0') {
            FUN_05fb85e8();
          }
        } while (*(char *)(lVar16 + 0x3f) != '\0');
        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
           (unaff_x22 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x38),*(undefined4 *)(lVar16 + 8),
                                     *(undefined8 *)
                                      Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__),
           in_stack_00000008 == 0)) goto LAB_05fb915c;
        unaff_x26 = 0;
      }
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x26) goto LAB_05fb9160;
      if ((unaff_x22 == 0) || (lVar16 = *(long *)(unaff_x22 + 0xa8), lVar16 == 0))
      goto LAB_05fb915c;
      if (*(uint *)(lVar16 + 0x18) <= unaff_x26) goto LAB_05fb9160;
      lVar16 = *(long *)(lVar16 + unaff_x26 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05fb915c;
      unaff_x23 = *(long *)(in_stack_00000008 + unaff_x26 * 8 + 0x20);
      FUN_04042130(&stack0x00000010,lVar16,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000010 = 0;
      in_stack_00000068 = in_stack_00000028;
      _uStack0000000000000060 = in_stack_00000020;
      in_stack_00000018 = unaff_x25;
      in_stack_00000058 = unaff_x25;
    }
  } while( true );
LAB_05fb8d58:
  if (*(uint *)(in_stack_00000008 + 0x18) <= uVar22) {
LAB_05fb9160:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  uVar11 = (ulong)uVar22;
  lVar16 = *(long *)(in_stack_00000008 + uVar11 * 8 + 0x20);
  if (lVar16 == 0) {
LAB_05fb915c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (1 < *(int *)(lVar16 + 0x18)) {
    iVar23 = 1;
    do {
      lVar12 = FUN_05052fb4(lVar16,iVar23,*unaff_x28);
      uVar17 = *(ulong *)(lVar12 + 0x10);
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05fb915c;
      uVar6 = FUN_05fc9454(*(long *)(unaff_x19 + 0x20),uVar22,iVar23,0);
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05fb915c;
      uVar13 = FUN_05fc93bc(*(long *)(unaff_x19 + 0x20),uVar22,iVar23,0);
      if (((uVar17 & 0x100000000) == 0 || (uVar6 & 1) != 0) || ((uVar13 & 1) != 0)) {
        iVar7 = Unity_Services_DistributedAuthority_Http_JsonObject_<>c___cctor();
        if (iVar7 != -1) {
          lVar12 = FUN_050522c4();
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_05fb915c;
          if (*(uint *)(lVar12 + 0x18) <= uVar22) goto LAB_05fb9160;
          lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_05fb915c;
          lVar18 = *(long *)(lVar12 + 0x10);
          lVar19 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_05fb915c;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            *(int *)(lVar18 + (long)(int)uVar3 * 4 + 0x20) = iVar23;
          }
          else {
            FUN_03fb3e1c(lVar12,iVar23,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar8 = FUN_05fb7f1c();
        uVar9 = FUN_05fb80f0();
        if (((uVar17 & 0x100000000) == 0) && (iVar7 == -1)) {
LAB_05fb8fa4:
          bVar4 = true;
        }
        else {
                    /* try { // try from 05fb8ee0 to 060b93f7 has its CatchHandler @ 05fb8ee0
                       catch() { ... } // from try @ 05fb8ee0 with catch @ 05fb8ee0
                       catch() { ... } // from try @ 05fb9438 with catch @ 05fb8ee0
                       catch() { ... } // from try @ 05fb97d8 with catch @ 05fb8ee0
                       catch() { ... } // from try @ 05fb980c with catch @ 05fb8ee0
                       catch() { ... } // from try @ 05fb985c with catch @ 05fb8ee0 */
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          iVar10 = FUN_054e9108(uVar9,uVar8,0);
          if (iVar10 == -1) goto LAB_05fb8fa4;
          lVar12 = FUN_050522c4();
          cVar2 = *(char *)(lVar12 + 0x3c);
          lVar12 = FUN_050522c4();
          if (cVar2 != '\0') {
            iVar25 = *(int *)(lVar12 + 0x38);
            iVar5 = iVar10;
            while (iVar24 = iVar5, iVar25 == -1) {
              iVar24 = iVar5 + 1;
              if (*(int *)(unaff_x20 + 0x18) + -1 <= iVar5) {
                iVar25 = -1;
                break;
              }
              lVar12 = FUN_050522c4();
              iVar5 = iVar24;
              if (*(char *)(lVar12 + 0x3c) == '\0') {
                iVar25 = -1;
              }
              else {
                lVar12 = FUN_050522c4();
                iVar25 = *(int *)(lVar12 + 0x38);
              }
            }
            if ((iVar24 == *(int *)(unaff_x20 + 0x18)) &&
               (lVar12 = FUN_050522c4(), iVar25 = iVar24, *(char *)(lVar12 + 0x41) == '\0')) {
              uVar20 = *(undefined8 *)(unaff_x19 + 0x38);
              FUN_02979e58(uVar20);
              uVar14 = thunk_FUN_02dfd288(Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__)
              ;
              lVar16 = thunk_FUN_0400ff1c(uVar20,iVar10,uVar14);
              uVar14 = thunk_FUN_02dfd288(System_Xml_Schema_Datatype_tokenV1Compat_TypeInfo);
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,uVar22);
              uVar20 = thunk_FUN_02dfd288(Method_UnityEngine_AndroidJavaObject_Call<double>__);
              uVar20 = thunk_FUN_02dd2d7c(uVar20,&stack0x00000010);
              FUN_02979e58(lVar16);
              uVar21 = *(undefined8 *)(lVar16 + 0x10);
              uVar15 = thunk_FUN_02dfd288(Method_UnityEngine_AndroidJavaObject_Call<short>__);
              uVar14 = FUN_0536e120(uVar15,uVar20,uVar14,uVar21,0);
              thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
              uVar20 = thunk_FUN_02dd3144();
              FUN_054e8008(uVar20,uVar14,0);
              uVar14 = thunk_FUN_02dfd288(Method_UnityEngine_AndroidJavaObject_Call<int>__);
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar20,uVar14);
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            iVar10 = FUN_054e9108(0,iVar25 + -1,0);
            while (lVar12 = FUN_050522c4(), *(char *)(lVar12 + 0x3f) != '\0') {
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              iVar10 = FUN_054e9108(0,iVar10 + -1,0);
            }
            lVar12 = FUN_050522c4();
          }
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) goto LAB_05fb915c;
          if (*(uint *)(lVar12 + 0x18) <= uVar22) goto LAB_05fb9160;
          lVar12 = *(long *)(lVar12 + uVar11 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_05fb915c;
          lVar19 = *(long *)(lVar12 + 0x10);
          lVar18 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05fb915c;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if (uVar3 < *(uint *)(lVar19 + 0x18)) {
            bVar4 = false;
            *(uint *)(lVar12 + 0x18) = uVar3 + 1;
            *(int *)(lVar19 + (long)(int)uVar3 * 4 + 0x20) = iVar23;
          }
          else {
            FUN_03fb3e1c(lVar12,iVar23,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            bVar4 = false;
          }
        }
        bVar1 = false;
        if (iVar7 == -1) {
          bVar1 = bVar4;
        }
        if ((!bVar1) && (((uVar6 ^ 1) & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05fb915c;
          FUN_05fcb008(*(long *)(unaff_x19 + 0x20),uVar22,iVar23,0);
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(lVar16 + 0x18));
  }
  uVar22 = uVar22 + 1;
  if (uVar22 == 3) {
    return;
  }
  goto LAB_05fb8d58;
}


