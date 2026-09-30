/*
FUNCTION_NAME: FUN_013baec8
ENTRY_POINT: 013baec8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_4;telemetry_or_network_hits_1
*/


undefined8
FUN_013baec8(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,long param_6)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_60;
  undefined4 *puStack_58;
  undefined4 local_44;
  undefined *puVar7;
  
  if ((DAT_037767c0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__);
    thunk_FUN_00d48444(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(StringLiteral_13635);
    DAT_037767c0 = 1;
  }
  lVar3 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x58) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar3 = thunk_FUN_00d62348();
  if (lVar3 == 0) goto LAB_013bb374;
  lVar8 = *(long *)(param_6 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x132);
  lVar4 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_00d5941c(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_6 + 0x20) + 0x132);
    lVar4 = *(long *)(param_6 + 0x20);
  }
  uVar13 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
  (**(code **)(lVar4 + 0x10))(uVar13,lVar4,lVar3,0,0);
  *(long *)(lVar3 + 0x10) = param_1;
  *(long *)(lVar3 + 0x18) = param_2;
  *(long *)(lVar3 + 0x20) = param_3;
  *(long *)(lVar3 + 0x38) = param_5;
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo;
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_CharmBracelet_OnGrab__;
  }
  else {
    if (param_5 != 0) {
      FUN_017f3980(param_4,0,0);
      lVar4 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar4 = thunk_FUN_00d62348();
      if (lVar4 != 0) {
        lVar9 = *(long *)(param_6 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x132);
        lVar8 = lVar9;
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_00d5941c(lVar9);
          uVar1 = *(ushort *)(*(long *)(param_6 + 0x20) + 0x132);
          lVar8 = *(long *)(param_6 + 0x20);
        }
        puVar7 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
        uVar13 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x68);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_00d5941c(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x68);
        puStack_58 = &local_44;
        local_60 = 0;
        local_44 = param_4;
        (**(code **)(lVar8 + 0x10))(uVar13,lVar8,lVar4,&local_60,&local_44);
        *(long *)(lVar3 + 0x28) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
        puVar7 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
        if (lVar4 != 0) {
          lVar8 = *(long *)(param_6 + 0x20);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_00d5941c();
          }
          FUN_011c181c(lVar4,lVar3,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70),0);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
          if (lVar8 != 0) {
            FUN_017e98e4(lVar8,lVar4,0,0,0,0,0,0,0);
            plVar12 = *(long **)(lVar3 + 0x10);
            *(long *)(lVar3 + 0x30) = lVar8;
            puVar7 = System_Xml_TextEncodedRawTextWriter_TypeInfo;
            if (plVar12 != (long *)0x0) {
              lVar4 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_013bb174;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar5 = (undefined8 *)
                       FUN_00d59724(plVar12,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,0)
              ;
LAB_013bb174:
              uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
              puVar2 = StringLiteral_13635;
              if ((uVar10 & 1) != 0) {
                if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_017eaeb0(*(long *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x38),0,0);
FUN_013bb268:
                return *(undefined8 *)(lVar3 + 0x28);
              }
              plVar12 = *(long **)(lVar3 + 0x10);
              if (plVar12 != (long *)0x0) {
                lVar4 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar7) {
                      puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_013bb200;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar5 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar7,1);
LAB_013bb200:
                uVar13 = (*(code *)*puVar5)(plVar12,puVar5[1]);
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if (lVar4 != 0) {
                  lVar8 = *(long *)(param_6 + 0x20);
                  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                    lVar8 = FUN_00d5941c();
                  }
                  FUN_017e03dc(lVar4,lVar3,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x78),0);
                  FUN_017e39a4(uVar13,lVar4,0,0xffffffff,1,0);
                  goto FUN_013bb268;
                }
              }
            }
          }
        }
      }
LAB_013bb374:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = StringLiteral_44;
  }
  uVar6 = thunk_FUN_00d48444(puVar7);
  FUN_016ec5b8(uVar13,uVar6,0);
  uVar6 = thunk_FUN_00d48444(
                            Method_Obi_ObiTriangleMeshContainer_<>c_<GetOrCreateTriangleMesh>b__6_0__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,uVar6);
}


