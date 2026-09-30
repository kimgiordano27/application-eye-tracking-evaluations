/*
FUNCTION_NAME: FUN_069d40f8
ENTRY_POINT: 069d40f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_069d40f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar1 = PTR_DAT_072794b0;
  if ((DAT_076e212c & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Nullable<NativeArray<float>>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(Method_System_Nullable<ArSession>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<ArSession>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<AssetType>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<AssetType>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<AssetType>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<BigInteger>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<bool>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<bool>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<bool>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<bool>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<bool>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<Bounds>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<Bounds>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<Bounds>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<Bounds>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<byte>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<byte>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<byte>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<CameraClearFlags>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<CameraClearFlags>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<CameraClearFlags>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<char>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<char>_GetValueOrDefault__);
    thunk_FUN_032e1da0(Method_System_Nullable<char>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<char>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<Color>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<Color>_GetHashCode__);
    thunk_FUN_032e1da0(Method_System_Nullable<Color>_GetValueOrDefault__);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    thunk_FUN_032e1da0(Method_System_Nullable<Color>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<CompressionLevel>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<CompressionLevel>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<CompressionLevel>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<Configuration>__ctor__);
    thunk_FUN_032e1da0(Method_System_Nullable<Configuration>_get_HasValue__);
    thunk_FUN_032e1da0(Method_System_Nullable<Configuration>_get_Value__);
    thunk_FUN_032e1da0(Method_System_Nullable<ConstructorHandling>__ctor__);
    DAT_076e212c = 1;
  }
  lVar9 = FUN_032d5d3c(*(undefined8 *)puVar1,4);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)Method_System_Nullable<char>_get_HasValue__;
      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20));
      if (1 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x28) =
             *(undefined8 *)Method_System_Nullable<AssetType>_GetValueOrDefault__;
        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28));
        puVar2 = PTR_DAT_072798c8;
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_072798c8;
          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x30));
          puVar8 = Method_System_Nullable<ConstructorHandling>__ctor__;
          puVar7 = Method_System_Nullable<CameraClearFlags>_get_Value__;
          puVar6 = Method_System_Nullable<bool>_get_Value__;
          puVar5 = Method_System_Nullable<bool>__ctor__;
          puVar4 = Method_System_Nullable<ArSession>_GetValueOrDefault__;
          puVar3 = Method_System_Nullable<NativeArray<float>>__ctor__;
          if (3 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar2;
            thunk_FUN_0333a630();
            **(long **)(*(long *)puVar3 + 0xb8) = lVar9;
            thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar3 + 0xb8),lVar9);
            uVar10 = FUN_06883870(*(undefined8 *)puVar7,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883870(*(undefined8 *)puVar7,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883a68(*(undefined8 *)puVar4,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883a68(*(undefined8 *)puVar6,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883870(*(undefined8 *)puVar8,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883870(*(undefined8 *)puVar5,0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            uVar10 = FUN_06883994(**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
            puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
            *puVar12 = uVar10;
            thunk_FUN_0333a630(puVar12,uVar10);
            lVar9 = FUN_032d5d3c(*(undefined8 *)puVar1,0x43);
            if (lVar9 == 0) goto LAB_069d4edc;
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined8 *)(lVar9 + 0x20) =
                   *(undefined8 *)Method_System_Nullable<Bounds>_get_HasValue__;
              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20));
              if (1 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)puVar2;
                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28));
                if (2 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar2;
                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x30));
                  if (3 < *(uint *)(lVar9 + 0x18)) {
                    *(undefined8 *)(lVar9 + 0x38) =
                         *(undefined8 *)Method_System_Nullable<Bounds>_GetValueOrDefault__;
                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x38));
                    if (4 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x40) =
                           *(undefined8 *)Method_System_Nullable<byte>__ctor__;
                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x40));
                      if (5 < *(uint *)(lVar9 + 0x18)) {
                        *(undefined8 *)(lVar9 + 0x48) =
                             *(undefined8 *)Method_System_Nullable<char>_get_Value__;
                        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x48));
                        if (6 < *(uint *)(lVar9 + 0x18)) {
                          *(undefined8 *)(lVar9 + 0x50) =
                               *(undefined8 *)Method_System_Nullable<bool>_GetValueOrDefault__;
                          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x50));
                          if (7 < *(uint *)(lVar9 + 0x18)) {
                            *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)puVar2;
                            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x58));
                            if (8 < *(uint *)(lVar9 + 0x18)) {
                              *(undefined8 *)(lVar9 + 0x60) =
                                   *(undefined8 *)
                                    Method_System_Nullable<Configuration>_get_HasValue__;
                              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x60));
                              if (9 < *(uint *)(lVar9 + 0x18)) {
                                *(undefined8 *)(lVar9 + 0x68) =
                                     *(undefined8 *)Method_System_Nullable<Bounds>__ctor__;
                                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x68));
                                if (10 < *(uint *)(lVar9 + 0x18)) {
                                  *(undefined8 *)(lVar9 + 0x70) =
                                       *(undefined8 *)Method_System_Nullable<Bounds>_get_Value__;
                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x70));
                                  if (0xb < *(uint *)(lVar9 + 0x18)) {
                                    *(undefined8 *)(lVar9 + 0x78) =
                                         *(undefined8 *)
                                          Method_System_Nullable<bool>_GetValueOrDefault__;
                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x78));
                                    if (0xc < *(uint *)(lVar9 + 0x18)) {
                                      *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)puVar2;
                                      thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x80));
                                      if (0xd < *(uint *)(lVar9 + 0x18)) {
                                        *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)puVar2;
                                        thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x88));
                                        if (0xe < *(uint *)(lVar9 + 0x18)) {
                                          *(undefined8 *)(lVar9 + 0x90) = *(undefined8 *)puVar2;
                                          thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x90));
                                          if (0xf < *(uint *)(lVar9 + 0x18)) {
                                            *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)puVar2;
                                            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x98));
                                            if (0x10 < *(uint *)(lVar9 + 0x18)) {
                                              *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)puVar2;
                                              thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xa0));
                                              if (0x11 < *(uint *)(lVar9 + 0x18)) {
                                                *(undefined8 *)(lVar9 + 0xa8) =
                                                     *(undefined8 *)
                                                      Method_System_Nullable<Color>_GetHashCode__;
                                                thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xa8));
                                                if (0x12 < *(uint *)(lVar9 + 0x18)) {
                                                  *(undefined8 *)(lVar9 + 0xb0) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xb0));
                                                  if (0x13 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xb8) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xb8))
                                                    ;
                                                    if (0x14 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xc0) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar9 + 0xc0));
                                                      if (0x15 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 200) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar9 + 200));
                                                        if (0x16 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0xd0) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<AssetType>__ctor__;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Nullable<CameraClearFlags>_get_HasValue__
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Nullable<CameraClearFlags>__ctor__;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Nullable<bool>_get_HasValue__;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0xf0) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xf0))
                                                    ;
                                                    if (0x1b < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0xf8) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar9 + 0xf8));
                                                      if (0x1c < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x100) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_0333a630(lVar9 + 0x100);
                                                        if (0x1d < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x108) =
                                                               *(undefined8 *)puVar2;
                                                          thunk_FUN_0333a630(lVar9 + 0x108);
                                                          if (0x1e < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x110) =
                                                                 *(undefined8 *)puVar2;
                                                            thunk_FUN_0333a630(lVar9 + 0x110);
                                                            if (0x1f < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x118) =
                                                                   *(undefined8 *)puVar2;
                                                              thunk_FUN_0333a630(lVar9 + 0x118);
                                                              if (0x20 < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x120) =
                                                                     *(undefined8 *)puVar2;
                                                                thunk_FUN_0333a630(lVar9 + 0x120);
                                                                if (0x21 < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x128) =
                                                                       *(undefined8 *)puVar2;
                                                                  thunk_FUN_0333a630(lVar9 + 0x128);
                                                                  puVar1 = 
                                                  Method_System_Nullable<BigInteger>__ctor__;
                                                  if (0x22 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x130) =
                                                         *(undefined8 *)
                                                          Method_System_Nullable<BigInteger>__ctor__
                                                    ;
                                                    thunk_FUN_0333a630(lVar9 + 0x130);
                                                    if (0x23 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x138) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x138);
                                                      if (0x24 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x140) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_0333a630(lVar9 + 0x140);
                                                        if (0x25 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x148) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<char>_GetValueOrDefault__;
                                                  thunk_FUN_0333a630(lVar9 + 0x148);
                                                  if (0x26 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x150) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x150);
                                                    if (0x27 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x158) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x158);
                                                      if (0x28 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x160) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_0333a630(lVar9 + 0x160);
                                                        if (0x29 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x168) =
                                                               *(undefined8 *)puVar2;
                                                          thunk_FUN_0333a630(lVar9 + 0x168);
                                                          if (0x2a < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x170) =
                                                                 *(undefined8 *)puVar2;
                                                            thunk_FUN_0333a630(lVar9 + 0x170);
                                                            if (0x2b < *(uint *)(lVar9 + 0x18)) {
                                                              *(undefined8 *)(lVar9 + 0x178) =
                                                                   *(undefined8 *)puVar2;
                                                              thunk_FUN_0333a630(lVar9 + 0x178);
                                                              if (0x2c < *(uint *)(lVar9 + 0x18)) {
                                                                *(undefined8 *)(lVar9 + 0x180) =
                                                                     *(undefined8 *)puVar2;
                                                                thunk_FUN_0333a630(lVar9 + 0x180);
                                                                if (0x2d < *(uint *)(lVar9 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar9 + 0x188) =
                                                                       *(undefined8 *)puVar2;
                                                                  thunk_FUN_0333a630(lVar9 + 0x188);
                                                                  if (0x2e < *(uint *)(lVar9 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar9 + 400) =
                                                                         *(undefined8 *)puVar2;
                                                                    thunk_FUN_0333a630(lVar9 + 400);
                                                                    if (0x2f < *(uint *)(lVar9 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x198) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x198);
                                                    if (0x30 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x1a0) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x1a0);
                                                      if (0x31 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x1a8) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<Configuration>_get_Value__;
                                                  thunk_FUN_0333a630(lVar9 + 0x1a8);
                                                  if (0x32 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x1b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Nullable<CompressionLevel>_get_HasValue__
                                                  ;
                                                  thunk_FUN_0333a630(lVar9 + 0x1b0);
                                                  if (0x33 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x1b8) =
                                                         *(undefined8 *)
                                                          Method_System_Nullable<Color>__ctor__;
                                                    thunk_FUN_0333a630(lVar9 + 0x1b8);
                                                    if (0x34 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x1c0) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x1c0);
                                                      if (0x35 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x1c8) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<CompressionLevel>__ctor__;
                                                  thunk_FUN_0333a630(lVar9 + 0x1c8);
                                                  if (0x36 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x1d0) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x1d0);
                                                    if (0x37 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x1d8) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x1d8);
                                                      if (0x38 < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x1e0) =
                                                             *(undefined8 *)puVar1;
                                                        thunk_FUN_0333a630(lVar9 + 0x1e0);
                                                        if (0x39 < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x1e8) =
                                                               *(undefined8 *)puVar1;
                                                          thunk_FUN_0333a630(lVar9 + 0x1e8);
                                                          if (0x3a < *(uint *)(lVar9 + 0x18)) {
                                                            *(undefined8 *)(lVar9 + 0x1f0) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_System_Nullable<ArSession>_get_HasValue__;
                                                  thunk_FUN_0333a630(lVar9 + 0x1f0);
                                                  if (0x3b < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x1f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Nullable<Color>_get_HasValue__;
                                                  thunk_FUN_0333a630(lVar9 + 0x1f8);
                                                  if (0x3c < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x200) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x200);
                                                    if (0x3d < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x208) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_0333a630(lVar9 + 0x208);
                                                      if (0x3e < *(uint *)(lVar9 + 0x18)) {
                                                        *(undefined8 *)(lVar9 + 0x210) =
                                                             *(undefined8 *)puVar1;
                                                        thunk_FUN_0333a630(lVar9 + 0x210);
                                                        if (0x3f < *(uint *)(lVar9 + 0x18)) {
                                                          *(undefined8 *)(lVar9 + 0x218) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<AssetType>_get_HasValue__;
                                                  thunk_FUN_0333a630(lVar9 + 0x218);
                                                  if (0x40 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x220) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x220);
                                                    if (0x41 < *(uint *)(lVar9 + 0x18)) {
                                                      *(undefined8 *)(lVar9 + 0x228) =
                                                           *(undefined8 *)puVar1;
                                                      thunk_FUN_0333a630(lVar9 + 0x228);
                                                      puVar8 = 
                                                  Method_System_Nullable<Configuration>__ctor__;
                                                  puVar7 = 
                                                  Method_System_Nullable<CompressionLevel>_get_Value__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Nullable<Color>_GetValueOrDefault__;
                                                  puVar5 = Method_System_Nullable<char>__ctor__;
                                                  puVar4 = 
                                                  Method_System_Nullable<byte>_get_HasValue__;
                                                  puVar1 = 
                                                  Method_System_Nullable<byte>_GetValueOrDefault__;
                                                  if (0x42 < *(uint *)(lVar9 + 0x18)) {
                                                    *(undefined8 *)(lVar9 + 0x230) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630(lVar9 + 0x230);
                                                    plVar11 = (long *)(*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x40);
                                                    *plVar11 = lVar9;
                                                    thunk_FUN_0333a630(plVar11,lVar9);
                                                    uVar10 = FUN_06883870(*(undefined8 *)puVar7,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x48);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883870(*(undefined8 *)puVar1,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x50);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883a68(*(undefined8 *)puVar5,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x58);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883a68(*(undefined8 *)puVar6,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x60);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883870(*(undefined8 *)puVar8,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x68);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883870(*(undefined8 *)puVar4,0);
                                                    puVar12 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x70);
                                                    *puVar12 = uVar10;
                                                    thunk_FUN_0333a630(puVar12,uVar10);
                                                    uVar10 = FUN_06883994(*(undefined8 *)
                                                                           (*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 0x40),0);
                                                  puVar12 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x78);
                                                  *puVar12 = uVar10;
                                                  thunk_FUN_0333a630(puVar12,uVar10);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_069d4edc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


